#include "Save_Class.h"

void Save_Class::saveImage(Mat inputImage, int inputAmoutImages, string inputImageString) {

	imageToSave = inputImage;
	imageString = inputImageString;
	nr = inputAmoutImages;

	name = imageString;
	type = ".jpg";

	ss << name << (nr + 1) << type;

	filename = ss.str();
	ss.str("");

	imwrite(filename, imageToSave);

	foldername = imageString;
	folderCreateCommand = "mkdir " + foldername;

	system(folderCreateCommand.c_str());

	ss << foldername << "/" << name << (nr + 1) << type;

	fullPath = ss.str();
	ss.str("");

	imwrite(fullPath, imageToSave);

};
