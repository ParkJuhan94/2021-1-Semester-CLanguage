#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int year; 
int month; 
int lastdate;
int isyoon(int);

//������ �����ϱ� ���� �Լ�
int isyoon(int y) {
    if ((y % 4 == 0) && !(y % 100 == 0) || (y % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

//�Է� ���� ��������¥�� ���� �Լ�
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
    int year; // ����� �Է�
    int month; // ����� �Է� 
    int lastdate; // ���� ������ ��¥ ���� ����
    int i; // for�� ����
    int j; // for�� ����
    int k; // ����� ����
    int sum; // ������ ��� �� ��� ����

    printf("����� ��,���� �Է��ϼ��� : ");
    scanf("%d %d", &year, &month);
     
    lastdate = Lastdate(year, month);
    //�˰���

    //1970����� �۳���� ��ĥ����
    sum = 0;
    for (i = 1970; i < year; i++) {
         if (isyoon(i))
            sum += 366;
         else
            sum += 365;
    }

        //���� �� ���� ������ ��ĥ���� 
        for (i = 1; i < month; i++) {
            sum += Lastdate(year, i);
        }

        //�Է��� �� 1�� ���� �������� ���
        k = (sum + 4) % 7;

        //���
        printf("��\t��\tȭ\t��\t��\t��\t��\n");

        //���� ���Ͽ� ���� ����
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
