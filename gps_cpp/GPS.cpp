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

vector<string>& GPS::getLonGGA() {

	//data = GPGGA;
	data = "$GPGGA,1714.0,3723.465874,N,12202.26954,W,2,6,1.2,18.893,M,-25.669,M,2.0,0031*4F";

		string s;
		vector<string> elems;
		stringstream ss(s);
		string item;
		while (std::getline(ss, item, delim)) {
			elems.push_back(item);
		}
		return elems;

}

string GPS::getLatGGA() {

	//data = GPGGA;

	data = "$GPGGA,1714.0,3723.465874,N,12202.26954,W,2,6,1.2,18.893,M,-25.669,M,2.0,0031*4F";

}
