#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void trim(char data[]) {
	int i = 0;		//빈칸 갯수 변동
	int n;		//스트링을 당기기

	while (data[i] == ' ' || data[i] == '\t') {
		i++;
	}

	for (n = 0; n < strlen(data); n++) {
		data[n] = data[i];
		i++;
	}
	
}


int main() {
	char str[100];
	fgets(str, 100, stdin);  // 한 줄을 읽는다. 이건 그냥 쓰면 된다.
	printf("Before: %s\n", str);
	trim(str);
	printf("After: %s\n", str);

}