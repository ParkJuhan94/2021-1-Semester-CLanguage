#include "pen.h"
Pen::Pen(string s)
	:owner_(s)
{
}
void Pen::Show()
{
	cout << "( " << owner_ << "�� �� )" << endl;
}
