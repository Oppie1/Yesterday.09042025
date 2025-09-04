#pragma once
#include <string>
using namespace std;


class BuckyClass {
public:
	BuckyClass();
	BuckyClass(string z);

	void coolSaying();
	
	
	void setName(string x);
	string getName();
	

private: 
	string name;
};