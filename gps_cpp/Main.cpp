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
        gps.update();
        cout << "GLL data: " << gps.getGLL().c_str() << endl;
        cout << "GGA data: " << gps.getGGA().c_str() << endl;
    };
}