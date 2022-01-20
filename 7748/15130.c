#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	printf("정수를 입력하시오 : \n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	
	return 0;
}