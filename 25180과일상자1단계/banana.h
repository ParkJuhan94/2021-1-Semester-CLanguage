#pragma once

#include <iostream>
#include "fruit.h"
#include "fruitstuff.h"
using namespace std;
class Banana : public Fruit {
	// 공개 메소드
public:
	Banana(string);  // 기본 생성자.
	void Show() override;
	// 상속할 함수 및 변수
};

