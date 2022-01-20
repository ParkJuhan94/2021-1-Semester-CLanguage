#pragma once
#include "fruit.h"
#include "fruitstuff.h"
#include <iostream>
#include <list>
using namespace std;

class Box: public Fruitstuff {
public:
	Box(string);
	void Add(Fruitstuff*);
	void Show();
protected:
	list<Fruitstuff*>* stuff;
};

//그룹 도형
