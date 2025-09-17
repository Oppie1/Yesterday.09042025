#include <iostream>
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

	BuckyClass::BuckyClass() {
		name = "";
	}

	void BuckyClass::coolSaying() {
		cout << "Preaching to the choir " << endl;
	}

	void BuckyClass::setName(string x) {
		name = x;
	}

	BuckyClass::BuckyClass(string z) {
		setName(z);
	}

	string BuckyClass :: getName() {
		return name;
	}



int main()
{
	BuckyClass buckyObject;
	buckyObject.coolSaying();

	BuckyClass bo;
	bo.setName("Sir Bucky Wallace\n");
	cout << bo.getName();

	BuckyClass mo("Lucky Bucky Roberts\n");
	cout << mo.getName();

	BuckyClass bo2("Sally mcSalad\n");
	cout << bo2.getName();


	return 0;
}
