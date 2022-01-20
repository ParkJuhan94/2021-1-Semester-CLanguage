//17520 a-z의 개수 배열에 저장하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int count[26] = { 0 };
	char str[100000] = { 0 };

	scanf("%s", &str);

	for (int i = 0; str[i] != 0; i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			count[str[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%c %d\n", i + 'a', count[i]);
	}
}