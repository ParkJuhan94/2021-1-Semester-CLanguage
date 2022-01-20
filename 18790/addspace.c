#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void addspace(char _copy[], char _org[]) {
	int i;
	int cnt = 0;
	for (i = 0; _org[i] != 0; i++) {
		if (_org[i - 1] == ',') {
			_copy[i + cnt] = ' ';
			cnt++;
		}
		_copy[i + cnt] = _org[i];
	}
}


int main() {
	char org[100], copy[100];
	fgets(org, 100, stdin);
	addspace(copy, org);
	printf("원본: %s\n", org);
	printf("결과: %s\n", copy);
}