#pragma once

#include <iostream>
#include "fruitstuff.h"

using namespace std;
class Fruit: public Fruitstuff {
	// ���� �޼ҵ�
public:
	Fruit(string);  // �⺻ ������.
	virtual void Show();
	// ����� �Լ� �� ����
};

