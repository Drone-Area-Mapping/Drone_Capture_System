#include "Capture_Class.h"

VideoCapture  capRGB(0), capNVDI(1), capFLIR(2);

void Capture_Class::debug() {

	
		if (waitKey(30) == 's') {

		    imageRGB = captureRGB();
			imageFLIR = captureFLIR();
			imageNVDI = captureNVDI();
			imshow("RGB", imageRGB);
			imshow("FLIR", imageFLIR);
			imshow("NVDI", imageNVDI);
		}							   

};

Mat Capture_Class::captureRGB() { 

	capRGB.read(frameVideoRGB);
	imshow("RGB video", frameVideoRGB);

	framePictureRGB = frameVideoRGB.clone();

	return framePictureRGB;

};

Mat Capture_Class::captureNVDI() {

	capNVDI.read(frameVideoNVDI);
	imshow("NVDI Video", frameVideoNVDI);
	
	framePictureNVDI = frameVideoNVDI.clone();

	return framePictureNVDI;

}  

Mat Capture_Class::captureFLIR() {

	capFLIR.read(frameVideoFLIR);
	imshow("FLIR video", frameVideoFLIR);

	framePictureFLIR = frameVideoNVDI.clone();

	return framePictureFLIR;

}
