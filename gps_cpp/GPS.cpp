#include "GPS.h"

using namespace std;

GPS::GPS()
{
    //cout << "initializing GPS...\n";
    //initialize();
    //for(int i = 0; i < 100; i++)
    //{
    //    putchar(serialGetchar(fd));
    //    fflush(stdout);
    //}
    //cout << "\nGPS succesfully initialized!\n";
};
GPS::~GPS()
{
    cout << "✌️\n";
};
void GPS::update()
{
    while(serialDataAvail(fd))
    {
        inputChar = serialGetchar(fd);
        if(inputChar != ' ' && inputChar != '\n') inputString += inputChar;
        if(inputChar == '\n')
        {
            // cout << inputString.c_str() << endl;
            setData(inputString);
            inputString = "";
        }
    }
    
};
int GPS::initialize()
{
    if ((fd = serialOpen(serialPort.c_str(), 9600)) < 0) {
        fprintf(stderr, "Unable to open serial device: %s\n", strerror(errno));
        return 1;
    }
    return 0;
};
bool GPS::setData(string data)
{
    cout << "setData: " << data.substr(1,5).c_str() << endl;
    if(data.substr(1,5) == "GPGLL") GPGLL = data.substr(7);
    if(data.substr(1,5) == "GPGGA") GPGGA = data.substr(7);
    return true;
};
string GPS::getGLL()
{
    return GPGLL;
}
string GPS::getGGA()
{
    return GPGGA;
}

string GPS::getLonGGA() {

	//data = GPGGA;
	data = "$GPGGA,1714.0,3723.465874,N,12202.26954,W,2,6,1.2,18.893,M,-25.669,M,2.0,0031*4F";

	int nth1 = 2;
	size_t pos1 = 0;
	int cnt1 = 0;

	while (cnt1 != nth1)
	{
		pos1 += 1;
		pos1 = data.find(target, pos1);
		if (pos1 == string::npos)
			break;
		cnt1++;
	}

	int nth2 = 2;
	size_t pos2 = 0;
	int cnt2 = 0;

	while (cnt2 != nth2)
	{
		pos2 += 1;
		pos2 = data.find(target, pos2);
		if (pos2 == string::npos)
			break;
		cnt2++;
	}

	return data.substr(pos1, pos2);


}

string GPS::getLatGGA() {

	//data = GPGGA;

	data = "$GPGGA,1714.0,3723.465874,N,12202.26954,W,2,6,1.2,18.893,M,-25.669,M,2.0,0031*4F";
	
	int nth1 = 2;
	size_t pos1 = 0;
	int cnt1 = 0;

	while (cnt1 != nth1)
	{
		pos1 += 1;
		pos1 = data.find(target, pos1);
		if (pos1 == string::npos)
			break;
		cnt1++;
	}

	int nth2 = 2;
	size_t pos2 = 0;
	int cnt2 = 0;

	while (cnt2 != nth2)
	{
		pos2 += 1;
		pos2 = data.find(target, pos2);
		if (pos2 == string::npos)
			break;
		cnt2++;
	}
	
	return data.substr(pos1, pos2);

}