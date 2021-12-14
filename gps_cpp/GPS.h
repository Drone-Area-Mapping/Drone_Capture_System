#include <iostream>
#include <string>
#include <cstring>
#include <wiringSerial.h>
#include <stdio.h>
#include <errno.h>
#include <vector>
#include <sstream>

using namespace std;


class GPS
{
    public:
        GPS();
        ~GPS();
        int initialize();
        void update();
        string getGLL();
        string getGGA();
		string getLonGGA();
		string getLatGGA();

    private:
        bool setData(std::string);
        int fd = 0;
        char inputChar;
        string inputString = "";
        string serialPort = "/dev/ttyS0";
        string GPGLL;
        string GPGGA;
		string data;
		string target = ",";
};