#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define R_SIZE 4
#define C_SIZE 3

int main() {
	int mat[R_SIZE][C_SIZE] = {
		{1000, 1001, 1002},
		{1003, 1004, 1005},
		{1006, 1007, 1008},
		{1009, 1010, 1011}
	};
	int tmp[C_SIZE];

	for (int j = 0; j < C_SIZE; j++) {
		tmp[j] = mat[0][j];
		mat[0][j] = mat[3][j];
		mat[3][j] = tmp[j];
	}

	for (int i = 0; i < R_SIZE; i++) {
		for (int j = 0; j < C_SIZE; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}