#include "box.h"
#include "pen.h"
#include "book.h"
#include <iostream>
using namespace std;
int main() {
	Box* box1 = new Box("���");
	box1->Add(new Pen("ȫ�浿"));
	box1->Add(new Pen("�㳭����"));
	box1->Show();

	/* ������ Ǯ ���� �� �κ��� ����� �Ʒ� �κ��� �ڸ�Ʈ �����Ѵ�. */

	/*
	Box * box1 = new Box("���");
	Box * box2 = new Box("ȫ�浿");
	Box * box3 = new Box("��浿");

	box3->Add(new Pen("��浿"));
	box3->Add(new Book("��浿"));

	box2->Add(new Pen("ȫ�浿"));
	box2->Add(new Book("ȫ�浿"));
	box2->Add(box3);

	box1->Add(new Pen("���"));
	box1->Add(new Book("���"));
	box1->Add(box2);
	box1->Add(new Book("���"));

	box1->Show();
	*/
}
