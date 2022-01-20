#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int firstdate;

//1.윤년 판별 함수
int isyoon(int _year) {
	if ((_year % 4 == 0) && (_year % 100 != 0) || (_year % 400 == 0)) {
		return 1;
	}
	else {
		return 0;
	}
}


	//2.특정 연월의 날수를 알아내는 함수
int Lastdate(int _year, int _month) {
	int lastdate[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isyoon(_year)) {
		lastdate[1] = 29;
	}
	return lastdate[_month - 1];
}


	// 전체 날 수를 알아내는 함수
int sumdate(int _year, int _month) {
	int sum = 0;
	for (int i = 1970; i < _year; i++) {
		if (isyoon(i)) {
			sum += 366;
		}
		else {
			sum += 365;
		}
	}
	for (int i = 1; i < _month; i++) {
		sum += Lastdate(_year, i);
	}
	return sum;
};


	//그리는 함수
void prtcalendar(int _firstdate, int _lastdate) {
	printf("-----------------------------------------------------\n");
	printf("일\t월\t화\t수\t목\t금\t토\n");

	for (int i = 0; i < _firstdate; i++) {
		printf("*\t");
	}
	for (int j = 1; j <= _lastdate; j++) {
		printf("%d\t", j);
		if ((_firstdate == 6) ) {
			printf("\n");
			_firstdate = -1;
		}
		_firstdate++;
	}
	for (int k = 0; k < 7; k++) {
		if (_firstdate != 0 && _firstdate <= 6) {
			printf("*\t");
			_firstdate++;
		}
	}
	printf("\n");
	printf("-----------------------------------------------------\n");
};

int main() {
	int year;
	int month;
	int firstdate;  //  입력 월의 1일의 요일 : 0이면 일요일로 맞추자.

	while (1) {
		printf("연 / 월을 입력하세요: \n");
		scanf("%d %d", &year, &month);

		//1970-1-1 목요일부터 카운팅된다.
		firstdate = (sumdate(year, month) + 4) % 7;

		prtcalendar(firstdate, Lastdate(year, month));
	}
}
