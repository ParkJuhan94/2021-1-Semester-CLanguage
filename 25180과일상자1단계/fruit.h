#pragma once

#include <iostream>
#include "fruitstuff.h"

using namespace std;
class Fruit: public Fruitstuff {
	// 공개 메소드
public:
	Fruit(string);  // 기본 생성자.
	virtual void Show();
	// 상속할 함수 및 변수
};

