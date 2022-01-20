#include <stdio.h>
int main() {
	int sum = 0;
	/*
	for (int n = 1; sum <= 100; n++) {
		sum += n;
		printf("n   : %d\n", n);
		printf("sum : %d\n", sum);
	}
	*/
	for (int n = 1; sum <= 100; n++) {
		sum += n;
		if (sum > 100) {
			printf("n   : %d\n", n);
			printf("sum : %d\n", sum);
		}

	}
	return 0;
}