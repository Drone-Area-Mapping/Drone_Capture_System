#pragma once

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;



class Capture_Class
{

private:
	Mat imageError;
	Mat framePicture;
	Mat image;

	Mat capture();


public:

	Mat frameVideo;

	int port = 0;

	Mat initialize();




};

