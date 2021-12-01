#include <iostream>
#include <string>
#include <cstring>
#include <wiringSerial.h>
#include <stdio.h>
#include <errno.h>



class GPS
{
    public:
        GPS();
        ~GPS();
        int initialize();
        void update();
        std::string getLocation();
        int calculateDistance();
        void setStep();
        std::string getGLL();
        std::string getGGA();

    private:
        bool setData(std::string);
        int fd = 0;
        char inputChar;
        std::string inputString = "";
        std::string serialPort = "/dev/ttyS0";
        std::string GPGLL;
        std::string GPGGA;
};