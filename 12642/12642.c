#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int year; 
int month; 
int lastdate;
int isyoon(int);

//윤년을 구분하기 위한 함수
int isyoon(int y) {
    if ((y % 4 == 0) && !(y % 100 == 0) || (y % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

//입력 달의 마지막날짜를 위한 함수
int Lastdate(int y, int m) {
    int lastdate;
    if (m == 2){
        if (isyoon(y)){
            lastdate = 29;
        }else{
            lastdate = 28;
        }
    }else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        lastdate = 31;
    }else{
        lastdate = 30;
    }
    return lastdate;
}

int main() {
    int year; // 사용자 입력
    int month; // 사용자 입력 
    int lastdate; // 월별 마지막 날짜 저장 변수
    int i; // for문 변수
    int j; // for문 변수
    int k; // 저장용 변수
    int sum; // 현재의 모든 일 계산 변수

    printf("출력할 연,월을 입력하세요 : ");
    scanf("%d %d", &year, &month);
     
    lastdate = Lastdate(year, month);
    //알고리즘

    //1970년부터 작년까지 며칠인지
    sum = 0;
    for (i = 1970; i < year; i++) {
         if (isyoon(i))
            sum += 366;
         else
            sum += 365;
    }

        //올해 중 전월 말까지 며칠인지 
        for (i = 1; i < month; i++) {
            sum += Lastdate(year, i);
        }

        //입력한 월 1일 무슨 요일인지 계산
        k = (sum + 4) % 7;

        //출력
        printf("일\t월\t화\t수\t목\t금\t토\n");

        //시작 요일에 맞춰 정렬
        for (j = 0; j < k; j++) {
            printf("*\t");
        }

        for (i = 1; i <= lastdate; i++) {

            printf("%d\t", i);
            if (k == 6) {
                k = -1;
                printf("\n");
            }
            k++;
        }

        for (j = 0; j < 7; j++) {
            if (k != 0 && k <= 6) {
                printf("*\t");
                k++;
            }
        }
        printf("\n");
}
