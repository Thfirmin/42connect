#!/bin/bash

echo "rebot in final of program? [y/n]"
read ANSWER

USER="thfirmin"

PKGS="
libpam-pwquality
vsftpd
"
#Install Needed Packages
sudo apt update
sleep 1

for pkgs in $PKGS; do
	sudo apt install -y ${pkgs}
done
sleep 1

#Create and put user in user42 group
# addgroup cria um grupo
# usermod -aG e addgorup adiciona usuario em grupo
# gpasswd -d retira usuario de grupo
# userdel e groupdel deletam usuario e grupo
# getent group e groups demonstram grupos
sudo addgroup user42
sudo usermod -aG user42 ${USER}
sleep 1

#Configurate the password
if [[ $(ls /etc/security/pwquality.conf) == "/etc/security/pwquality.conf" ]]; then
	cd /etc/security
	sed -i s/"# maxrepeat = 0"/"maxrepeat = 3"/ pwquality.conf
	sed -i s/"# difok = 1"/"difok = 7"/ pwquality.conf 
	sed -i s/"# dcredit = 0"/"decredit = -1"/ pwquality.conf 
	sed -i s/"# ucredit = 0"/"ucredit = -1"/ pwquality.conf 
	sed -i s/"# minlen = 8"/"minlen = 10"/ pwquality.conf 
	sed -i s/"# usercheck = 1"/"usercheck = 1"/ pwquality.conf 
	sed -i s/"# enforce_for_root"/"enforce_for_root"/ pwquality.conf 
else
	cd /etc/pam.d
	echo -e "# Configuration for systemwide password quality limits\n# Defaults:" >> common-password
	echo -e "# Minimum acceptable size for the new password (plus one if credits are not disabled which is the default). (See pam_cracklib manual.)\n# Cannot be set to lower value than 6.\nminlen = 10" >> common-password
	echo -e "# The maximum credit for having uppercase characters in the new password.\n# If less than 0 it is the minimum number of uppercase characters in the new\n# password.\nucredit = -1" >> common-password
	echo -e "# The maximum credit for having digits in the new password. If less than 0\n# it is the minimum number of digits in the new password.\ndcredit = -1" >> common-password
	echo -e "# The maximum number of allowed consecutive same characters in the new password.\n# The check is disabled if the value is 0\n.maxrepeat = 3" >> common-password
	echo -e "# Whether to check if it contains the user name in some form.\n# The check is enabled if the value is not 0.\nusercheck = 1" >> common-password
	echo -e "# Number of characters in the new password that must not be present in the\n# old password.\ndifok = 7" >> common-password
	echo -e "# Enforces pwquality checks on the root user password.\n# Enabled if the option is present.\nenforce_for_root" >> common-password
fi
sleep 1

#Configure de sudoers
cd /etc
sed -i /'secure_path='/d sudoers
sed -i '11s/^/Defaults\tsecure_path="\/usr\/local\/sbin:\/usr\/local\/bin:\/usr\/sbin:\/usr\/bin:\/sbin:\/bin:\/snap\/bin"\n/' sudoers
sed -i '12s/^/Defaults\trequiretty\n/' sudoers
sed -i '13s/^/Defaults\tlecture="always"\n/' sudoers
sed -i '14s/^/Defaults\tpasswd_tries=3\n/' sudoers
sed -i '15s/^/Defaults\tbadpass_message="Not\ Today\ Bro!"\n/' sudoers
sed -i '16s/^/Defaults\tlog_input\n/' sudoers
sed -i '17s/^/Defaults\tlog_output\n/' sudoers
sed -i '18s/^/Defaults\tlog_host\n/' sudoers
sed -i '19s/^/Defaults\tlogfile="\/var\/log\/sudo.log"\n/' sudoers
sleep 1

#Alterar Validade de senha sudo
cd /etc
sed -i s/'PASS_MAX_DAYS\t99999'/'PASS_MAX_DAYS\t30'/ login.defs
sed -i s/'PASS_MIN_DAYS\t0'/'PASS_MIN_DAYS\t2'/ login.defs
sleep 1

# Rebootar
if [ ${ANSWER} == "y" ];then
	sudo reboot
fi

#Architecture: Linux wil 4.19.0-16-amd64 #1 SMP Debian 4.19.181-1 (2021-03-19) x86_64 GNU/Linux
#CPU physical : 1
#vCPU : 1
#Memory Usage: 74/987MB (7.50%)
#Disk Usage: 1009/2Gb (39%)
#CPU load: 6.7%
#Last boot: 2021-04-25 14:45
#LVM use: yes
#Connections TCP : 1 ESTABLISHED
#User log: 1
#Network: IP 10.0.2.15 (08:00:27:51:9b:a5)
#Sudo : 42 cm

let MEMTOTAL=$(free -m | grep 'Mem:' | awk '{print$2}')
let MEMUSED=$(free -m | grep 'Mem:' | awk '{print$3}')

wall "
#Architecture: $(uname -a)
#CPU physical : $(lscpu | grep '^CPU(s)' | awk '{print$2}')
#vCPU : $(lscpu | grep '^CPU(s)' | awk '{print$2}')
#Memory Usage: echo -e "${MEMUSED}/${MEMTOTAL}MB \($(free -m | grep 'Mem' | awk '{printf"%.2f", $3/$2*100}')\)"
#Disk Usage: $(df -h --total | grep 'total'| awk '{printf"%.1f/%dGb (%s)", $3, $2, $5}')
#CPU load: $(vmstat 1 2 | tail -1 | awk '{printf"%.1f%%",(100 - $15)}')
#Last boot: $(uptime -s)
#LVM use: $(if [ $(lsblk | grep "lvm" | wc -l) -eq 0 ]; then echo "no"; else echo "yes"; fi)
#Connections TCP : $(ss -t | grep "ESTAB" | wc -l) ESTABILISHED
#User log: $(who | cut -d " " -f 1 | sort -u | wc -l)
#Network: $(hostname -I)
#Sudo : $(cat /var/log/sudo.log | grep "COMMAND" | wc -l) cmd
"
