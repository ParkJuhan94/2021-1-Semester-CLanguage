#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int seconds(int h1, int m1, int s1) {
	return 3600 * h1 + 60 * m1 + s1;
}


int main() {
	int h, m, s;
	scanf("%d %d %d", &h, &m, &s);

	printf("√— %d√  ¿‘¥œ¥Ÿ.\n", seconds(h, m, s));
}