#pragma once

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;



class Capture_Class
{

private:
	Mat imageError;
	Mat framePictureRGB;
	Mat framePictureNVDI;
	Mat framePictureFLIR;
	Mat imageRGB;
	Mat imageFLIR;
	Mat imageNVDI;

	Mat captureRGB();
	Mat captureNVDI();
	Mat captureFLIR();


public:

	Mat frameVideoRGB;
	Mat frameVideoNVDI;
	Mat frameVideoFLIR;

	int port = 0;

	Mat initialize();




};

