#include "main.h"

int main() {

	while (true)
	{

		imageToSave = captureClass.initialize();
		saveClass.saveImage(imageToSave, ct);

		ct++;

		if (waitKey(1) == 'c') {

			break;
		}

	}

}