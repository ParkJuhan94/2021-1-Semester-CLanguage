#include "box.h"
#include "pen.h"
#include "book.h"
#include <iostream>
using namespace std;
int main() {
	Box* box1 = new Box("Çã±Õ");
	box1->Add(new Pen("È«±æµ¿"));
	box1->Add(new Pen("Çã³­¼³Çå"));
	box1->Show();

	/* ¹®Á¦¸¦ Ç® ¶§´Â À§ ºÎºÐÀ» Áö¿ì°í ¾Æ·¡ ºÎºÐÀ» ÄÚ¸àÆ® ÇØÁ¦ÇÑ´Ù. */

	/*
	Box * box1 = new Box("Çã±Õ");
	Box * box2 = new Box("È«±æµ¿");
	Box * box3 = new Box("±è±æµ¿");

	box3->Add(new Pen("±è±æµ¿"));
	box3->Add(new Book("±è±æµ¿"));

	box2->Add(new Pen("È«±æµ¿"));
	box2->Add(new Book("È«±æµ¿"));
	box2->Add(box3);

	box1->Add(new Pen("Çã±Õ"));
	box1->Add(new Book("Çã±Õ"));
	box1->Add(box2);
	box1->Add(new Book("Çã±Õ"));

	box1->Show();
	*/
}
