// 18869 경로에서 파일명만 저장하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void getFileName(char _dir[], char _filename[]) {
	int cnt = 0;
	int check = 0;
	int i,j,k = 0;
	
	for (i = 0; _dir[i] != 0; i++) {
		if (_dir[i] == '/') {
			cnt++;
		}
	}

	for (j = 0; check != cnt; j++) {
		if (_dir[j] == '/') {
			check++;
		}
	}
	for (j; _dir[j] != 0; j++, k++) {
		_filename[k] = _dir[j];
	}
	_filename[k] = 0;
}

int main() {
	char dir[256];
	char filename[100];
	scanf("%s", dir);
	getFileName(dir, filename);
	printf("파일명:%s\n", filename);
}