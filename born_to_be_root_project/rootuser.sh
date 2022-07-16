#!/bin/bash
USER="thfirmin"
sudo usermod -aG sudo ${USER}
sudo addgroup user42
sudo usermod -aG user42 ${USER}


