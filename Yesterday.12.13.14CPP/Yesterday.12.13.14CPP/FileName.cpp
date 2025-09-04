#include<iostream>//Both .cpp files need to be the same tops
#include "HouseClass.h"
using namespace std;

int main()
{

	HouseClass House1("Cant do 12 CPP and 14 cpp at same time");
	House1.getDoorbell();

	HouseClass House2("Welcome to our home");
	cout << House2.getDoorbell();


	

	return 0;
}