#pragma once
#include "Capture_Class.h"
#include "Save_Class.h"
#include "Trigger_Class.h"

Capture_Class captureClass;
Save_Class saveClass;
Trigger_Class triggerClass;
//GPS gps;
int ct = 0;

bool running = true;

int testNumberCurrent = 0;
int testNumberTrigger = 0;
int testNumberDifference;
double distanceCapturing = 50;
double gpsOffset = 3;
double lat1d, //current lat
lon1d; //current lon

double triggerLat;
double triggerLon;	  
