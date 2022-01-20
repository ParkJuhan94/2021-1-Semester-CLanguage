#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int cube(int n) {
	return n * n * n;
}


int main() {
	int a;
	scanf("%d", &a);

	printf("%d\n", cube(a));

}