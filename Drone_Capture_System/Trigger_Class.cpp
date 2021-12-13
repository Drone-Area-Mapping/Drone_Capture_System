#include "Trigger_Class.h"

double Trigger_Class::calculateTrigggerDistance(int inputCoordinateCurrent, int inputCoordinateLastCapture, double lat1d, double lon1d, double lat2d, double lon2d) {

	currentCoordinates = inputCoordinateCurrent;
	lastCaptureCoordinates = inputCoordinateLastCapture;

	differenceDistance = currentCoordinates - lastCaptureCoordinates;

	
	lat1r = deg2rad(lat1d);
	lon1r = deg2rad(lon1d);
	lat2r = deg2rad(lat2d);
	lon2r = deg2rad(lon2d);
	u = sin((lat2r - lat1r) / 2);
	v = sin((lon2r - lon1r) / 2);
	return 2.0 * earthRadiusKm*1000 * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));

	//return differenceDistance;


}

double Trigger_Class :: deg2rad(double deg) {
	return (deg * M_PI / 180);
}

double Trigger_Class :: rad2deg(double rad) {
	return (rad * 180 / M_PI);
}