#include "main.h"

int main() {

	while (true)
	{

		if(gpsrange>setRange)saveClass.saveImage(captureClass.capureRGB, "RGB");



		imageToSaveNDVI = captureClass.initialize();
		saveClass.saveImage(imageToSaveNDVI, ct);

		ct++;

		if (waitKey(1) == 'c') {

			break;
		}
		///update telemetry 

	}
	//telemetry loop

}