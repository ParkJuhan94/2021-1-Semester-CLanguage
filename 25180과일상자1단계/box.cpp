#include "box.h"
#include <iostream>
using namespace std;
Box::Box(string name)
	:Fruitstuff(name)
{	
	stuff = new list<Fruitstuff*>;
}

void Box::Add(Fruitstuff* r) {
	stuff->push_back(r);
}

void Box::Show() {
	list<Fruitstuff*>::iterator i;
	cout << "[상자. 이름은: " << name_ << ". 안에 들은 물건은: " << endl;
	for (i = stuff->begin(); i != stuff->end(); i++) {
		(*i)->Show();
	}
	cout << name_ << " 끝]" << endl;
}
