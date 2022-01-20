#include "banana.h"
#include <iostream>
using namespace std;
Banana::Banana(string name) :Fruit(name) {
	// Default 생성자
}
void Banana::Show() {
	cout << "(바나나 입니다. 이름은 " << name_ << "입니다.)" << endl;
}
