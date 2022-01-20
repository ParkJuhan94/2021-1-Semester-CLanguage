//26140 Àç±Í·Î Â¦¼öÀÇ Á¦°öÀÇ ÇÕ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(unsigned int n) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 2 * 2;
	}
	if (n % 2 == 0) {
		return plus(n - 2) + n * n;
	}
	return plus(n - 3) + (n - 1) * (n - 1);
}

int main() {
	unsigned int a;
	scanf("%d", &a);
	printf("%d\n", plus(a));
}