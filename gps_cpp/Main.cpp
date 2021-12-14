/*
Hi there! This program can be compilled using:
g++ *.cpp -o [OUTPUTNAME] -lwiringPi
see ya! ~F 😎
*/

#include "Main.h"


using namespace std;

int main()
{
    GPS gps;
    while(true)
    {
        //gps.update();
		string token = gps.getLonGGA();
		string token2 = gps.getLatGGA();
		cout << "Lon: " << token.c_str() << endl;
	    cout << "Lat: " << token2.c_str() << endl;
        //cout << "GLL data: " << gps.getGLL().c_str() << endl;
        //cout << "GGA data: " << gps.getGGA().c_str() << endl;
    };
}