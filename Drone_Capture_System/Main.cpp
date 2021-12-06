#include "main.h"

int main() {

	while (true)
	{

<<<<<<< Updated upstream
		if(gpsrange>setRange)saveClass.saveImage(captureClass.capureRGB, "RGB");



		imageToSaveNDVI = captureClass.initialize();
		saveClass.saveImage(imageToSaveNDVI, ct);
=======
		imageToSaveRGB,imageToSaveFLIR, imageToSaveNDVI = captureClass.initialize();
		saveClass.saveImage(imageToSaveRGB,imageToSaveFLIR,imageToSaveNDVI, ct);
>>>>>>> Stashed changes

		ct++;

		if (waitKey(1) == 'c') {

			break;
		}
<<<<<<< Updated upstream
		///update telemetry 

	}
	//telemetry loop
=======

	}
>>>>>>> Stashed changes

}