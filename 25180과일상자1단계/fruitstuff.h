#pragma once
#include <iostream>
using namespace std;

class Fruitstuff
{
	// ���� �޼ҵ�
public:
	Fruitstuff(string);  // �⺻ ������.
	virtual void Show() = 0;
	// ����� �Լ� �� ����
protected:
	string name_;
};

//�⺻ ����