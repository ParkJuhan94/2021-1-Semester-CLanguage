#pragma once
#include "pen.h"
#include <iostream>
#include <list>
using namespace std;
class Box {
public:
	Box(string);
	void Add(Pen*);
	void Show();
private:
	list<Pen*>* everything;
	string owner_;
};
