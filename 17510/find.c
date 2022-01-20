#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int n;
	int cnt = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < 10; i++) {
		if (n == score[i]) {
			cnt++;
		}
	}
	if (cnt) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}