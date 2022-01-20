#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double avg(int data[]) {
	int sum = 0;
	int cnt = 0;
	for (int i = 0; data[i] != -1; i++) {
		sum += data[i];
		cnt++;
	}
	return (double)sum / cnt;
}


int main() {
	int math[] = { 4,5,6,7,8, 9, -1 };   // -1은 점수가 아니다.
	int english[] = { 50, 60, 71, 81, -1 };
	
	double avccore = avg(math);
	// avccore  출력
	printf("%.1lf\n", avccore);
	avccore = avg(english);
	printf("%.1lf\n", avccore);
}