#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pswap(int* pa, int* pb) {
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}



int main() {
	int a;
	int b;
	scanf("%d %d", &a, &b);
	pswap(&a, &b);
	printf("%d %d", a, b);
}