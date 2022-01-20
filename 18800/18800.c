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
	char  str[20] = { 'a', 'b', 'c', -1 };   // 이것은 N-스트링이다.
	char  hello[10] = "hello";  // 이것은 C-스트링이다.
	char  str2[20];

	nprint(str);   // print함수는 주어진 N-string을 출력하고 뒤에 줄바꿈까지 출력하는 함수이다.

	nconvert(hello);  // 주어진 C-스트링을 N-string으로 변환한다.
	nprint(hello);

	myscan(str);  // 표준입력 스트림에서 빈칸, tab, newline을 건너뛰고 스트링을 찾아서 저장한다.
	nprint(str);

	nstrcopy(str2, hello);   // hello에 들어있는 N-스트링을 str2로 복사.
	nprint(str2);

	nstradd(str2, str);    // str2 뒤에 str을 갖다 붙인다.
	nprint(str2);
}