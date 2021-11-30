#include "Capture_Class.h"

int Capture_Class::initialize() {

	VideoCapture cap(port);

	if (!cap.isOpened()) {
		return -1;
	}

	while (1) {

		cap.read(frameVideo);
		imshow("video", frameVideo);

		if (waitKey(1) == 's') {
			image = capture();
			imshow("picture", image);
		}
		else if (waitKey(1) == 'c') {
			break;
		}

	}
	return 0;


};

Mat Capture_Class::capture() {

	framePicture = frameVideo.clone();

	return framePicture;


};
