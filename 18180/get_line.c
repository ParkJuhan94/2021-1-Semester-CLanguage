#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char get_line[100];
	int c = 0;

	for (int i = 0; i < 100; i++) {
		c = getchar();
		get_line[i] = c;
		if (c == '\n' || c == EOF) {
			get_line[i] = 0;
			break;
		}
		
	}
	printf("%s", get_line);
}