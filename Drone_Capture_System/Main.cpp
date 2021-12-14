#include "Main.h"

int main(int, char**) {

	while (true) {

		while (running)
		{
			//gps.update()
			if (testNumberCurrent == 0) {
				 test = "$GPGGA,161229.487,3723.24756,N,12158.34162,W,1,07,1.0,9.0,M, , , ,0000*18";
			}
			if (testNumberCurrent == 1) {
				test = "$GPGGA,161229.487,3723.2368,N,12158.52526,W,1,07,1.0,9.0,M, , , ,0000*18";
			}

			gps.getGGA(test);
			lat1d = gps.getLatGGA();
			lon1d = gps.getLonGGA();



			
			testNumberCurrent++;

			testNumberDifference = triggerClass.calculateTrigggerDistance(testNumberCurrent, testNumberTrigger, lat1d, lon1d, triggerLat, triggerLon);
			cout << to_string(testNumberDifference).c_str() <<"\n"; cout << to_string(testNumberDifference).c_str() << "\n"; cout << to_string(testNumberDifference).c_str() << "\n";
											  
			if (testNumberDifference >= distanceCapturing - gpsOffset) {

				ct++;
				saveClass.saveGps(ct, "GpsCoordinaten", to_string(lat1d), to_string(lon1d));
				saveClass.saveImage(captureClass.captureRGB(), ct, "RGB");
				//saveClass.saveImage(captureClass.captureNVDI(), ct, "NVDI");
				//saveClass.saveImage(captureClass.captureFLIR(), ct, "FLIR");
				testNumberTrigger = testNumberCurrent;
				triggerLat = lat1d;
				triggerLon = lon1d;

			}




			if (ct >= 2) {
				
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