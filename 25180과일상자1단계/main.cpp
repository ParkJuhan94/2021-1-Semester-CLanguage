#include "box.h"
#include "apple.h"
#include "banana.h"
#include "fruit.h"
#include "fruitstuff.h"
#include <iostream>
using namespace std;
int main() {
    Box* box1 = new Box("ū ����");
    Box* box2 = new Box("���� ����");

    box1->Add(new Apple("���� ���"));

    box2->Add(new Apple("�ҷ� ���"));
    box2->Add(new Banana("�Ķ� �ٳ���"));
    box2->Add(new Banana("��� �ٳ���"));
    box2->Add(new Box("���� ���� ����"));
    box1->Add(box2);
    box1->Show();
}
