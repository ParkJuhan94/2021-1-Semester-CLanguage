#pragma once

#include <iostream>
#include "fruit.h"
#include "fruitstuff.h"
using namespace std;
class Apple: public Fruit {
	// ���� �޼ҵ�
public:
	Apple(string);  // �⺻ ������.
	void Show () override;
	// ����� �Լ� �� ����
};

