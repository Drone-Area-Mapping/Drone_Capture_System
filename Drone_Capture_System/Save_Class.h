#pragma once

#include "Capture_Class.h"
#include <fstream>
#include <iostream>
#include <string>

class Save_Class

{

private:

	Mat imageToSave;

	string name;
	string type = ".jpg";
	string foldername;
	string folderCreateCommand;
	string fullPath;
	string imageString;

	string nameTxt;
	string filename;
	string foldernameTxt;
	string fullPathTxt;

	int nr = 0;

	

	string gpsLla;
	string gpsGga;

	string outputString;



	


public:

	stringstream ss;
	stringstream s;


	void saveImage(Mat inputImage, int inputAmountImages, string inputImageString);
	void saveGps(int inputAmountImages, string inputNameTxt, string inputGpsLla, string inputGpsGga);

};

