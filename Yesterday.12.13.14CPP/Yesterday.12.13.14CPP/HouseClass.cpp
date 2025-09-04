#include<iostream>//Both .cpp files need to be the same tops
#include "HouseClass.h"
using namespace std;


HouseClass::HouseClass(string a) {
	setDoorbell(a);
}

void HouseClass::setDoorbell(string x) {
	doorBell2 = x;
}

string HouseClass::getDoorbell() {
	return doorBell2;
}

//void HouseClass::doorBell() {
//	cout << "This is door bell 12CPP" << endl;
//}


