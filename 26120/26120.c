// 26120 Àç±Í·Î ÇÕ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(int n) {	
	if (n == 1) {
		return 1;
	}
	return plus(n - 1) + n;
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", plus(a));
}