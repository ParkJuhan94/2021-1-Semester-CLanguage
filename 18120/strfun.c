#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char msg1[] = "Hello";
	char msg2[] = "world";
	char buffer[20];

	printf("%d\n", strlen(msg1));

	strcpy(buffer, msg1);
	printf("%s\n", buffer);

	strcat(buffer, msg2);
	printf("%s\n", buffer);
}