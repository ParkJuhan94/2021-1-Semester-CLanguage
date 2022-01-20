#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mystrcpy(char data2[], char data1[]) {
	for (int i = 0; i < data1[i] != 0; i++) {
		data2[i] = data1[i];
		data2[i + 1] = 0;
	}
}


int main() {
	char str1[80] = "hello";
	char str2[80];
	mystrcpy(str2, str1);
	printf("원본 %s  사본 %s\n", str1, str2);
	return 0;

}