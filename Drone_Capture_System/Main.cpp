#include "main.h"

int main(int, char**) {

	while (true) {

		while (running)
		{
			//gps.update()
			//gps.getGGL().str();
			//gps.getGGA().str();
			ct++;
			saveClass.saveGps(ct, "GpsCoordinaten", "coordinatesLLA", "coordinatesGGL");
			saveClass.saveImage(captureClass.captureRGB(), ct, "RGB");
			saveClass.saveImage(captureClass.captureNVDI(), ct, "NVDI");
			saveClass.saveImage(captureClass.captureFLIR(), ct, "FLIR");




			if (waitKey(1) == 'c') {

				return 0;
			}
			
			///update telemetry 

		}
	} //telemetry loop
	

}