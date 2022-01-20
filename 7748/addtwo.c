#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num_a, num_b;
	int sum = 0;

	scanf("%d %d", &num_a, &num_b);
	//합을 출력한다.
	sum = num_a + num_b;
	printf("합은 %d\n", sum);
	return 0;
}