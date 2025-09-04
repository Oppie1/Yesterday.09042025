#pragma once
#include<string>
using namespace std;


class HouseClass {
public:
	HouseClass(string a);
	void setDoorbell(string x);
	string getDoorbell();

	//void doorBell();

private:
	string doorBell2;
	
};


//If working on a project the reason we use header file is that other programers will have access
//to the functions through prototypes or the titles of the functions. The .cpp contains information
//That others will not have access to so they dont change anything


