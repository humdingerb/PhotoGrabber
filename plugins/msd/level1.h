/*
****************************************************************
* Copyright (c) 2004-2010,	Jan-Rixt Van Hoye				   *
* All rights reserved.										   *
* Distributed under the terms of the MIT License.              *
****************************************************************
*/
//
//	System includes
#include <Errors.h> // For Return Type
#include <AppFileInfo.h> // For Version Info
#include <String.h>
#include <cstdio>
#include <Path.h>
#include <string>
#include <vector>
#include <map>
#include <Looper.h>
//
//	Local includes
#include "MSInterface.h"

const int32 MSG_UPDATEBAR			= 0x01012001;

BLooper		*msgtarget;
int			*handles;
MSInterface	*msInterface;

bool haveigotfilenames;
std::map<int, char*> imagenames;
std::map<int, int> imagesizes;
std::map<int, char*> imagedates;
//Level 1 Functions - MUST be implemented fully to be BDCP2 Compliant

extern "C" int get_BDCP_API_Revision(void);
extern "C" void getPluginVersion(version_info &);
extern "C" status_t openCamera(void);
extern "C" status_t closeCamera(void);
extern "C" status_t getNumberofPics(int &);
extern "C" status_t setCurrentPicture(int picturenumber);
extern "C" status_t downloadPicture(BPath savedir, const char *name);
extern "C" void getSupportedCameras(std::vector<std::string> &);

