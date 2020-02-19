
Debian
====================
This directory contains files used to package erosd/eros-qt
for Debian-based Linux systems. If you compile erosd/eros-qt yourself, there are some useful files here.

## eros: URI support ##


eros-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install eros-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your eros-qt binary to `/usr/bin`
and the `../../share/pixmaps/eros128.png` to `/usr/share/pixmaps`

eros-qt.protocol (KDE)

