#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'c';
	char c4 = 'd';
	int result;
	
	result = (c1 << 24) + (c2 << 16) + (c3 << 8) + c4;

	printf("%x\n", result);
}