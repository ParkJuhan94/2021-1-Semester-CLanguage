#include "apple.h"
#include <iostream>
using namespace std;
Apple::Apple(string name) :Fruit(name) {
	// Default ������
}
void Apple::Show() {
	cout << "(��� �Դϴ�. �̸��� " << name_ << "�Դϴ�.)" << endl;
}
