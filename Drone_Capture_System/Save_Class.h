#pragma once

#include "Capture_Class.h"
#include <sstream>
class Save_Class
{

private:

	Mat imageToSave;

	string name = "image_";
	string type = ".jpg";
	string filename;
	string foldername;
	string folderCreateCommand;
	string fullPath;
	string imageString;

	int nr = 0;

	


public:

	stringstream ss;

	void saveImage(Mat inputImage, int inputAmountImages, string inputImageString);

};

