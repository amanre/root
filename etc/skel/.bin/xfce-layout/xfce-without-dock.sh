#!/bin/bash
#set -e

sudo pacman -Rs custom-xfc4  --noconfirm
sudo pacman -Rs plank --noconfirm
sudo pacman -Rs plank-themes-git --noconfirm
sudo pacman -S custom-xfce-without-dock --noconfirm
skel
