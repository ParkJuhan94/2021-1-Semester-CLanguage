#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int ac, char *av[]) {
	FILE* ifp;
	ifp = fopen(av[1], "r");
	FILE* ofp;
	ofp = fopen(av[2], "w");
	int c;

	if (ac != 3) {
		printf("������ ���� �Է��ϼ���\n");
		return;
	}
	else {
		while ((c = fgetc(ifp)) != EOF) {
			fputc(c, ofp);
		}
	}
}