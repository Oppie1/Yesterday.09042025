#include <iostream>
using namespace std;
#include "BuckyClass.h"

int main()
{
	BuckyClass buckysObject;
	buckysObject.coolSaying();

	BuckyClass bo;
	bo.setName("Sir Bucky Wallace\n");
	cout << bo.getName();

	
	BuckyClass mo("Lucky Bucky Roberts\n");
	cout << mo.getName();

	BuckyClass bo2("Sally mcSalad\n");
	cout << bo2.getName();

	return 0;
	
}