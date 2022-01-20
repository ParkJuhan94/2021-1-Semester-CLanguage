#pragma once
#include <iostream>
using namespace std;
class Book {
public:
	Book(string);
	void Show();
private:
	string owner_;
};

