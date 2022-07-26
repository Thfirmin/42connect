#!/bin/bash

#wall "
##Architecture: $(uname -a)
##CPU physical : $(lscpu | grep '^CPU(s)' | awk '{print$2}')
##vCPU : $(lscpu | grep '^CPU(s)' | awk '{print$2}')
##Memory Usage: echo -e "${MEMUSED}/${MEMTOTAL}MB \($(free -m | grep 'Mem' | awk '{printf"%.2f", $3/$2*100}')\)"
##Disk Usage: $(df -h --total | grep 'total'| awk '{printf"%.1f/%dGb (%s)", $3, $2, $5}')
##CPU load: $(vmstat 1 2 | tail -1 | awk '{printf"%.1f%%",(100 - $15)}')
##Last boot: $(uptime -s)
##LVM use: $(if [ $(lsblk | grep "lvm" | wc -l) -eq 0 ]; then echo "no"; else echo "yes"; fi)
##Connections TCP : $(ss -t | grep "ESTAB" | wc -l) ESTABILISHED
##User log: $(who | cut -d " " -f 1 | sort -u | wc -l)
##Network: $(hostname -I)
##Sudo : $(cat /var/log/sudo.log | grep "COMMAND" | wc -l) cmd
#"

NAME=exp.txt
echo "" > $NAME

echo -e "#!/bin/bash\n" > $NAME
echo "wall \"" >> $NAME
echo "#Architecture: \$(uname -a)" >> $NAME
echo "#CPU physical : \$(lscpu | grep '^CPU(s)' | awk '{print\$2}')" >> $NAME
echo "#Memory Usage: echo -e \"\${MEMUSED}/\${MEMTOTAL}MB \\(\$(free -m | grep 'Mem' | awk '{printf\"%.2f\", \$3/\$2*100}')\\)\"" >> $NAME
echo "#Disk Usage: \$(df -h --total | grep 'total'| awk '{printf\"%.1f/%dGb (%s)\", \$3, \$2, \$5}')" >> $NAME
echo "#CPU load: \$(vmstat 1 2 | tail -1 | awk '{printf\"%.1f%%\",(100 - \$15)}')" >> $NAME
echo "#Last boot: \$(uptime -s)" >> $NAME
echo "#LVM use: \$(if [ \$(lsblk | grep \"lvm\" | wc -l) -eq 0 ]; then echo \"no\"; else echo \"yes\"; fi)" >> $NAME
echo "#Connections TCP : \$(ss -t | grep \"ESTAB\" | wc -l) ESTABILISHED" >> $NAME
echo "#User log: \$(who | cut -d \" \" -f 1 | sort -u | wc -l)" >> $NAME
echo "#Network: \$(hostname -I)" >> $NAME
echo -e "#Sudo : \$(cat /var/log/sudo.log | grep \"COMMAND\" | wc -l) cmd\n\"" >> $NAME
