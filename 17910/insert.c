//17910 오름차순에 맞는 위치에 삽입하는 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[100] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	int curSize = 9; //저장된 항목 수를 나타낸다.
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