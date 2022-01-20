#pragma once
#include <iostream>
using namespace std;

class Fruitstuff
{
	// 공개 메소드
public:
	Fruitstuff(string);  // 기본 생성자.
	virtual void Show() = 0;
	// 상속할 함수 및 변수
protected:
	string name_;
};

//기본 도형