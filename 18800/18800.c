#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void nprint(char _str[]) {
	for (int i = 0; _str[i] != -1; i++) {
		printf("%c", _str[i]);
	}
	printf("\n");
}


void nconvert(char _hello[]) {
	_hello[strlen(_hello)] = -1;
}


void myscan(char _str[]) {
	int cnt = 0;
	int i;
	for (i = 0; _str[i] != -1; i++) {
		if (_str[i] == '\n' || _str[i] == '\t' || _str[i] == ' ') {
			cnt++;
		}
		_str[i] = _str[i + cnt];
	}
}


void nstrcopy(char _str2[], char _hello[]) {
	int i;
	for (i = 0; _hello[i] != -1; i++) {
		_str2[i] = _hello[i];
	}
	_str2[strlen(_hello)] = -1;
}


void nstradd(char _str2[], char _str[]) {
	int i;
	int slen = -1;

	for (int j = 0; _str2[j] != -1; j++) {
		slen++;
	}
	for (i = 0; _str[i] != -1; i++) {
		_str2[slen + i] = _str[i];
	}
	_str2[slen + strlen(_str) - 1] = -1;
}


int main() {
	char  str[20] = { 'a', 'b', 'c', -1 };   // �̰��� N-��Ʈ���̴�.
	char  hello[10] = "hello";  // �̰��� C-��Ʈ���̴�.
	char  str2[20];

	nprint(str);   // print�Լ��� �־��� N-string�� ����ϰ� �ڿ� �ٹٲޱ��� ����ϴ� �Լ��̴�.

	nconvert(hello);  // �־��� C-��Ʈ���� N-string���� ��ȯ�Ѵ�.
	nprint(hello);

	myscan(str);  // ǥ���Է� ��Ʈ������ ��ĭ, tab, newline�� �ǳʶٰ� ��Ʈ���� ã�Ƽ� �����Ѵ�.
	nprint(str);

	nstrcopy(str2, hello);   // hello�� ����ִ� N-��Ʈ���� str2�� ����.
	nprint(str2);

	nstradd(str2, str);    // str2 �ڿ� str�� ���� ���δ�.
	nprint(str2);
}