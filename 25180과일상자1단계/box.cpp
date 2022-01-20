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
	cout << "[����. �̸���: " << name_ << ". �ȿ� ���� ������: " << endl;
	for (i = stuff->begin(); i != stuff->end(); i++) {
		(*i)->Show();
	}
	cout << name_ << " ��]" << endl;
}
