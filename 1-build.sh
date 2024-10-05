#!/bin/bash


destination="/home/amanre/CUSTOM/amoslinux_repo/x86_64/"

			makepkg -f

			mv root-git*pkg.tar.zst $destination

			rm -r pkg
			rm -r src
			rm -rf root*
			echo "#############################################################################################"
			echo "################  "$(basename `pwd`)" done"
			echo "#############################################################################################"
			
		
