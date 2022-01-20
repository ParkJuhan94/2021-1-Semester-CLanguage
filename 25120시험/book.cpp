#include "book.h"
Book::Book(string s)
	:owner_(s)
{
}
void Book::Show()
{
	cout << "( " << owner_ << "ÀÇ Ã¥ )" << endl;
}
