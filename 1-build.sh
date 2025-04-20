#!/bin/bash


destination="/home/amanre/MYDOTFILES/amanre_repo/x86_64/"

			makepkg -f

			mv root-git*pkg.tar.zst $destination

			rm -r pkg
			rm -r src
			rm -rf root*
			echo "#############################################################################################"
			echo "################  "$(basename `pwd`)" done"
			echo "#############################################################################################"
			
		
