#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n) {
	int cnt = 0;
	for (int i = 2; i <= 0.5 * n; i++ ) {
		if (n % i == 0) {
			cnt++;
		}
	}
	if (cnt != 0 || n <= 1) {
		return 0;
	}
	else {
		return 1;
	}
}


int main() {
	int num;
	scanf("%d", &num);
	
	if (isPrime(num)){
		printf("¼Ò¼ö\n");
	}
	else {
		printf("¾Æ´Ô\n");
	}
}