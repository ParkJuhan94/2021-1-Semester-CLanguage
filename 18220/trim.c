#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void trim(char data[]) {
	int i = 0;		//��ĭ ���� ����
	int n;		//��Ʈ���� ����

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
	fgets(str, 100, stdin);  // �� ���� �д´�. �̰� �׳� ���� �ȴ�.
	printf("Before: %s\n", str);
	trim(str);
	printf("After: %s\n", str);

}