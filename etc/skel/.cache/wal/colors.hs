--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/usr/share/backgrounds/custom-walls/wallhaven-3l2o7y_1920x1080.png"

-- Special
background="#170d0e"
foreground="#c3c4c5"
cursor="#c3c4c5"

-- Colors
color0="#170d0e"
color1="#A15551"
color2="#CD695E"
color3="#BE847B"
color4="#6C7C83"
color5="#77888E"
color6="#77BFD2"
color7="#c3c4c5"
color8="#888989"
color9="#A15551"
color10="#CD695E"
color11="#BE847B"
color12="#6C7C83"
color13="#77888E"
color14="#77BFD2"
color15="#c3c4c5"