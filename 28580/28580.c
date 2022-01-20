//28580 구조체 포인터를 이용한 정렬
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct _square {
	int row;    //가로   
	int col;	//세로
	int area;   //면적
}square;


int main() {
	int cnt;
	square* thesquares[100];
	square tmp;
	square* tmp_area;

	for (cnt = 0; scanf("%d %d", &tmp.row, &tmp.col) == 2; cnt++ ) {
		tmp.area = tmp.row * tmp.col;
		thesquares[cnt] = (square*)malloc(sizeof(square));
		*thesquares[cnt] = tmp;
	}

	for (int last = cnt - 1; last >= 1; last--) {
		for (int i = 0; i <  last; i++) {
			if (thesquares[i]->area < thesquares[i + 1]->area) {
				tmp_area = thesquares[i];
				thesquares[i] = thesquares[i + 1];
				thesquares[i + 1] = tmp_area;
			}
		}
	}

	for (int i = 0; i < cnt; i++) {
		printf("%d %d\n", thesquares[i]->row, thesquares[i]->col);
	}
}