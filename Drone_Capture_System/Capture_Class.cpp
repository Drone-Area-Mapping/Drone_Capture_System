#include "Capture_Class.h"

Mat Capture_Class::initialize() {

	VideoCapture cap(port);

	if (!cap.isOpened()) {

		return imageError;
	}

	while (true) {

		cap.read(frameVideo);
		imshow("video", frameVideo);

		if (waitKey(1) == 's') {
			image = capture();
			imshow("picture", image);
			return image;
		}
		else if (waitKey(1) == 'c') {
			break;
		}

	}
	return image ;


};

Mat Capture_Class::capture() {

	framePicture = frameVideo.clone();

	return framePicture;


};
