#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu {
	int num;
	double score;
};




int main(){
	struct stu s[1000];
	int i;

	for (i = 0; scanf("%d %lf", &s[i].num, &s[i].score) == 2; i++) {
	}

	for (int j = i - 1 ;  j >= 0; j-- ) {
		printf("%d %.1lf\n", s[j].num, s[j].score);
	}
}