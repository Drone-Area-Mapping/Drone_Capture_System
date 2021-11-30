#pragma once

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;



class Capture_Class
{

private:

public:

	Mat frameVideo;
	Mat framePicture;
	Mat image;
	int initialize();

	Mat capture();

	int port=0;

};

