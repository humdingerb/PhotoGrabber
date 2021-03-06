## *****************************************************************
## * Copyright (c) 2004-2010, Jan-Rixt Van Hoye aka'Jixt'		   *
##,* 						and Luc Schrijvers aka 'Begasus'   *
## * All rights reserved.										   *
## * Distributed under the terms of the MIT License.               *
## *****************************************************************

## Buildfile for PhotoGrabber Mass storage plugin

# Cleaning the build system
#make clean
# Before building, check if the private headers are in place
PRIVATEDIR="./private"

if [ ! -d "$PRIVATEDIR" ] ; then
	mkdir private
	cd ./private
	svn checkout svn://svn.berlios.de/haiku/haiku/trunk/headers/private/storage storage
	svn checkout svn://svn.berlios.de/haiku/haiku/trunk/headers/private/shared shared
	svn checkout svn://svn.berlios.de/haiku/haiku/trunk/headers/private/mount mount
	cd ..
fi
# Build the ptp plugin
make

