#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_SIZE 20
#define PEOPLE_SIZE 30

int main() {
	char name[PEOPLE_SIZE][NAME_SIZE + 1];
	int i;   //�ݺ���
	int end = 1;  // 30�� �ο��ʰ��� �Ǵ�

	for (i = 0; scanf("%s", name[i]) == 1; i++) {
		if (i >= PEOPLE_SIZE) {
			printf("�ο� �ʰ�\n");
			end = 0;
			break;
		}
	}
	if (end) {
		while (i >= 1) {
			printf("%s\n", name[i - 1]);
			i--;
		}
	}
}