#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
// P-��Ʈ���� ����Ѵ�.
void printpstr(char s[]) {
	for (int i = 1; i <= s[0]; i++) {
		putchar(s[i]);
	}
}

//ǥ�� �Է¿��� getchar�� �̿��Ͽ� P-��Ʈ���� �Է��Ѵ�.��ȯ��: ���� 1 ����(EOF�̸�) - 1
int readpstr(char s[]) {
	int c;
	int n;

	// ����� ��Ʈ���� ������ ã�� �κ�. ��Ʈ�� ������ ���� ��ĭ�� �ǳ� �����.
	while ((c = getchar()) != EOF && (isspace(c))) { 
		//�����. �ǳ� ��⸸ ��.
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

// �־��� P-��Ʈ���� ���̸� �����ش�.
int slen(char s[]) {
	for (int i = 0; s[i] != 0; i++) {
		len += readpstr(s[i]);
	}
	return len;
}

// org�� dest�� �����Ѵ�.
void pstrcpy(char dest[], char org[]);  

int main() {
	char str1[100], str2[100];
	while (readpstr(str1) == 1) {
		printpstr(str1);
	};
//	pstrcpy(str2, str1);
//	printpstr(str2);
}