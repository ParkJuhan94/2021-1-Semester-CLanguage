#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num_a, num_b;
	int sum = 0;

	scanf("%d %d", &num_a, &num_b);
	//���� ����Ѵ�.
	sum = num_a + num_b;
	printf("���� %d\n", sum);
	return 0;
}