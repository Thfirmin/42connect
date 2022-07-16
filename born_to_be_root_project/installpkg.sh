#!/bin/bash

USER="thfirmin"

#Install Packages
apt install -y sudo
apt install -y ssh
apt install -y vim
apt install -y ufw
apt install -y libpam-pwquality

#put sudo and user42 group in user groups
sudo usermod-aG sudo thfirmin
sudo addgroup user42
sudo usermod -aG user42 thfirmin

#Configure ssh
cd /etc/ssh
