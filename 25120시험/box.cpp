#include "box.h"
Box::Box(string name)
	:owner_(name)
{
	//name_ = name;
	everything = new list<Pen*>;
}

void Box::Add(Pen* r) {
	everything->push_back(r);
}

void Box::Show() {
	list<Pen*>::iterator i;
	cout << owner_ << " �� ���� : " << endl;
	for (i = everything->begin(); i != everything->end(); i++) {
		(*i)->Show();
	}
	cout << owner_ << "�� ���� �� ]" << endl;
}
