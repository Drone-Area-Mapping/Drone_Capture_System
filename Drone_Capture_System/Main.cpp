#include "Main.h"

int main(int, char**) {

	while (true) {

		while (running)
		{
			//gps.update()
			//lat1d = gps.getGGL().str();
			//lat2d = gps.getGGA().str();
			if (testNumberCurrent == 0) {
				lat1d = 51.59298536754441;
				lon1d = 4.8020262287023865;
			}
			else if (testNumberCurrent == 1) {

				lat1d = 51.59297203709918;
				lon1d = 4.802750425125821;
			}
			else if (testNumberCurrent == 2) {

				lat1d = 51.59298536754441;
				lon1d = 4.8034853503851584;

			}
			else if (testNumberCurrent == 3) {

				lat1d = 51.59252546492298;
				lon1d = 4.803603367580089;

			}


			
			testNumberCurrent++;

			testNumberDifference = triggerClass.calculateTrigggerDistance(testNumberCurrent, testNumberTrigger, lat1d, lon1d, triggerLat, triggerLon);
			cout << to_string(testNumberDifference).c_str() <<"\n";
											  
			if (testNumberDifference >= distanceCapturing - gpsOffset) {

				ct++;
				saveClass.saveGps(ct, "GpsCoordinaten", to_string(lat1d), to_string(lon1d));
				saveClass.saveImage(captureClass.captureRGB(), ct, "RGB");
				saveClass.saveImage(captureClass.captureNVDI(), ct, "NVDI");
				saveClass.saveImage(captureClass.captureFLIR(), ct, "FLIR");
				testNumberTrigger = testNumberCurrent;
				triggerLat = lat1d;
				triggerLon = lon1d;

			}




			if (ct >= 4) {
				
				running = false;
				return running;
			}




			//if (waitKey(1) == 'c') {

			//	return 0;
			//}
			
			///update telemetry 

		}
	} //telemetry loop
	

}