//17910 ���������� �´� ��ġ�� �����ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[100] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	int curSize = 9; //����� �׸� ���� ��Ÿ����.
	int item;

	while (scanf("%d", &item) == 1 ) {
		for ( int i = curSize - 1; i >= 0; i-- ) {
			if (item <= score[i]) {
				if (i == 0) {
					score[i + 1] = score[i];
					score[i] = item;
				}
				else {
					score[i + 1] = score[i];
				}
			}
			else {
				score[i + 1] = item;
				break;
			}
		}
		curSize++;
	}
	for (int i = 0; i < curSize; i++) {
		printf("%d  ", score[i]);
	}
	
}