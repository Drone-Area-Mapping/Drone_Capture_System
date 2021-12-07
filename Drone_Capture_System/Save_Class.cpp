#include "Save_Class.h"

void Save_Class::saveImage(Mat inputImage, int inputAmoutImages, string inputImageString) {

	imageToSave = inputImage;
	imageString = inputImageString;
	nr = inputAmoutImages;

	name = imageString;

	foldername = imageString;
	folderCreateCommand = "mkdir " + foldername;

	system(folderCreateCommand.c_str());

	ss << foldername << "/" << name << (nr) << type;

	fullPath = ss.str();
	ss.str("");

	imwrite(fullPath, imageToSave);

};

void Save_Class::saveGps(int inputAmoutImages, string inputNameTxt, string inputGpsLla, string inputGpsGga) {

	ofstream write;

	write.open("GpsCoordinates.txt", ios_base::app | ios_base::in);

	if (write.is_open()) {

		gpsLla = inputGpsLla;
		gpsGga = inputGpsGga;
		nr = inputAmoutImages;

		
		s << nr << ":" << gpsLla << "	" << nr << ":" << gpsGga << endl;
		outputString = s.str();
		write << outputString;
		s.str(string());
	}
	else { cout << "ERROR!\n"; }



}
