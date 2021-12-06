#include "Save_Class.h"

void Save_Class::saveImage(Mat inputImage, int inputAmoutImages) {

	// to build sequential file names
	imageToSave = inputImage;
	nr = inputAmoutImages;

	name = "RGB_";
	type = ".jpg";

	ss << name << (nr + 1) << type;

	filename = ss.str();
	ss.str("");

	imwrite(filename, imageToSave);

	//to build folder name

	foldername = "RGB";
	folderCreateCommand = "mkdir " + foldername;

	system(folderCreateCommand.c_str());

	ss << foldername << "/" << name << (nr + 1) << type;

	fullPath = ss.str();
	ss.str("");

	imwrite(fullPath, imageToSave);

};
