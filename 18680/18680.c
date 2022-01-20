#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
// P-스트링을 출력한다.
void printpstr(char s[]) {
	for (int i = 1; i <= s[0]; i++) {
		putchar(s[i]);
	}
}

//표준 입력에서 getchar를 이용하여 P-스트링을 입력한다.반환값: 성공 1 실패(EOF이면) - 1
int readpstr(char s[]) {
	int c;
	int n;

	// 여기는 스트링의 시작을 찾는 부분. 스트링 나오기 전의 빈칸을 건너 띄어줌.
	while ((c = getchar()) != EOF && (isspace(c))) { 
		//비었음. 건너 띄기만 함.
	}
	n = 1;
	while (c != EOF && !isspace(c)) {
		s[n] = c;
		c = getchar();
		n++;
	}
	s[0] = n - 1;
	if ( n == 1) {
		return -1;
	}
	else {
		return 1;
	}
}

// 주어진 P-스트링의 길이를 돌려준다.
int slen(char s[]) {
	for (int i = 0; s[i] != 0; i++) {
		len += readpstr(s[i]);
	}
	return len;
}

// org를 dest로 복사한다.
void pstrcpy(char dest[], char org[]);  

int main() {
	char str1[100], str2[100];
	while (readpstr(str1) == 1) {
		printpstr(str1);
	};
//	pstrcpy(str2, str1);
//	printpstr(str2);
}