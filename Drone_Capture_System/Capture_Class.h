#pragma once

#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <sstream>

using namespace cv;
using namespace std;



class Capture_Class
{

private:
	Mat framePictureRGB;
	Mat framePictureNVDI;
	Mat framePictureFLIR;

	Mat frameVideoRGB;
	Mat frameVideoNVDI;
	Mat frameVideoFLIR;
	




public:



	Mat captureRGB();
	Mat captureNVDI();
	Mat captureFLIR();

};

