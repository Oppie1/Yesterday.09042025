#include<iostream>
#include "BuckyClass.h"
using namespace std;

BuckyClass::BuckyClass() {
	name = "";
}

void BuckyClass::coolSaying() {
	cout << "preaching to the choir" << endl;
}

void BuckyClass::setName(string x) {
	name = x;
}

BuckyClass::BuckyClass(string z) {
	setName(z);
}


string BuckyClass::getName() {
	return name;
}
