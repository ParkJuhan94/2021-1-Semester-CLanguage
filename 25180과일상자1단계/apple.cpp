#include "apple.h"
#include <iostream>
using namespace std;
Apple::Apple(string name) :Fruit(name) {
	// Default 생성자
}
void Apple::Show() {
	cout << "(사과 입니다. 이름은 " << name_ << "입니다.)" << endl;
}
