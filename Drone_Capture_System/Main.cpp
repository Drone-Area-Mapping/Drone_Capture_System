#include "main.h"

int main() {

	while (true)
	{

		captureClass.debug();
		saveClass.saveImage(captureClass.captureRGB(), ct, "RGB" );
		saveClass.saveImage(captureClass.captureNVDI(), ct, "NVDI");
		saveClass.saveImage(captureClass.captureFLIR(), ct, "FLIR");

		ct++;

		if (waitKey(1) == 'c') {

			break;
		}
		///update telemetry 

	}
	//telemetry loop

}