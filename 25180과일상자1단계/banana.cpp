#include "banana.h"
#include <iostream>
using namespace std;
Banana::Banana(string name) :Fruit(name) {
	// Default ������
}
void Banana::Show() {
	cout << "(�ٳ��� �Դϴ�. �̸��� " << name_ << "�Դϴ�.)" << endl;
}
