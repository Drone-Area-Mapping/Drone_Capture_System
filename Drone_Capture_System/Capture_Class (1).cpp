#include "Capture_Class.h"

Mat Capture_Class::initialize() {

	VideoCapture capRGB(port);
	VideoCapture capNVDI(1);
	VideoCapture capFLIR(2);


	if (!capRGB.isOpened() /*|| !capNVDI.isOpened()*/) {

		return imageError;
	}

	while (true) {

		capRGB.read(frameVideoRGB);
		capNVDI.read(frameVideoNVDI);
		capFLIR.read(frameVideoFLIR);
		imshow("videoRGB", frameVideoRGB);
		imshow("videoFLIR", frameVideoFLIR);
		imshow("videoNVDI", frameVideoNVDI);

		if (waitKey(1) == 's') {
			imageRGB = captureRGB();
			imageFLIR = captureFLIR();
			imageNVDI = captureNVDI();
			imshow("RGB", imageRGB);
			imshow("FLIR", imageFLIR);
			imshow("NVDI", imageNVDI);
		}
		else if (waitKey(1) == 'c') {
			break;
		}							   

	}
	return imageRGB, imageFLIR, imageNVDI;


};

Mat Capture_Class::captureRGB() {

	framePictureRGB = frameVideoRGB.clone();

	return framePictureRGB;

};

Mat Capture_Class::captureNVDI() {

	framePictureNVDI = frameVideoNVDI.clone();

	return framePictureNVDI;

}  

Mat Capture_Class::captureFLIR() {

	framePictureFLIR = frameVideoNVDI.clone();

	return framePictureFLIR;

}
