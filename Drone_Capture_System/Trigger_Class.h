#pragma once

#include "Capture_Class.h"
#include "Save_Class.h"
#include "GPS.h"

#include <math.h>
#include <cmath> 
#include <iostream>
#define earthRadiusKm 6371.0

const double M_PI = 3.14159265358979323846;

class Trigger_Class
{

private:

	int currentCoordinates;
	int lastCaptureCoordinates;
	int differenceDistance;

	double deg2rad(double deg);
	double rad2deg(double rad);

	double lat1r, lon1r, lat2r, lon2r, u, v;

public:

	double calculateTrigggerDistance(int inputCoordinateCurrent, int inputCoordinateLastCapture, double lat1d, double lon1d, double lat2d, double lon2d);

};

