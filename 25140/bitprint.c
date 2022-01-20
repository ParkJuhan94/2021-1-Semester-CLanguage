#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bitprint(int _data) {
	unsigned int mask = 0x80000000;
	for (int i = 0; i < 32; i++) {
		if ((_data & mask >> i) == mask >> i) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
}


int main() {
	int data;
	
	scanf("%x", &data);
	bitprint(data);
	printf("\n");
}