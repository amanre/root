#!/bin/bash
#set -e

sudo pacman -Rs custom-xfce-without-dock --noconfirm
sudo pacman -S custom-xfce4 plank plank-themes-git --noconfirm
skel