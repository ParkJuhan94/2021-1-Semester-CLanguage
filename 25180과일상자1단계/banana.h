#pragma once

#include <iostream>
#include "fruit.h"
#include "fruitstuff.h"
using namespace std;
class Banana : public Fruit {
	// ���� �޼ҵ�
public:
	Banana(string);  // �⺻ ������.
	void Show() override;
	// ����� �Լ� �� ����
};

