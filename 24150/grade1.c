//24150 ����ü �̿� ����ó��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SUBJ 10
#define MAX_NAME_LEN 15
#define MAX_STU 100
typedef struct student {
    char name[MAX_NAME_LEN + 1];
    int scores[MAX_SUBJ];
    float average;
} student_t;

void get_data(student_t st[MAX_STU], int nStu, int nSubj) {
    for (int i = 0; i < nStu; i++) {
        scanf("%s", st[i].name);
        for (int j = 0; j < nSubj; j++) {
            scanf("%d", &st[i].scores[j]);
        }
    }
}

void calc_average(student_t  st[MAX_STU], int nStu, int nSubj) {
    int sum[MAX_STU] = { 0 };
    for (int i = 0; i < nStu; i++) {
        for (int j = 0; j < nSubj; j++) {
            sum[i] += st[i].scores[j];
        }
        st[i].average = (float)sum[i] / nSubj;
    }
}

void print_data(student_t st[MAX_STU], int nStu, int nSubj) {
    printf("================================\n");
    for (int i = 0; i < nStu; i++) {
        printf("%s  ", st[i].name);
        for (int j = 0; j < nSubj; j++) {
            printf("%d\t", st[i].scores[j]);
        }
        printf("%.2f\n", st[i].average);
    }
}

void bubble_up(student_t  st[MAX_STU], int top, int bottom) {
    // bubble_up �Լ��� top ���� bottom������ ����ü �߿���
    // ���� average�� ū ���� ���� ������ �ؿ�������
    // �ΰ��� ���ؼ� �ø��� �Լ��� �����.
    student_t tmp[MAX_STU];
    for (int i = bottom; i < top; i++) {
        if (st[i].average < st[i + 1].average) {
            tmp[i] = st[i];
            st[i] = st[i + 1];
            st[i + 1] = tmp[i];
        }
    }
}

void sort_student(student_t st[MAX_STU], int nStu) {
    // bubble_up �� ������ ȣ���Ͽ� ������ ��Ų��.
    // ���ʿ��� ȣ���� ���� �ʵ��� ����ȭ�Ѵ�.
    // bubble_up ���� ȣ���� 1���� ��󳻰� �ϰ�
    // �ι�° ȣ���� 2����, .... �̷��� �Ѵ�.
    for (int i = 0; i < nStu - 1; i++) {
        bubble_up(st, nStu - 1, 0);
    }
}

int main() {
    student_t  st[MAX_STU] = { 0 };  // 0���� �ʱ�ȭ
    int nStu, nSubj;
    printf("�л����� ���� �� �Է�:\n");
    scanf("%d %d", &nStu, &nSubj);

    // ������ �Է��Ѵ�.
    get_data(st, nStu, nSubj);

    // �Էµ� �����͸� Ȯ������.
    //print_data(st, nStu, nSubj);

    // ����� ����Ͽ� ��������.
    calc_average(st, nStu, nSubj);

    // �����Ѵ�.
    sort_student(st, nStu);

    // ���ĵ� �����͸� ���.
    print_data(st, nStu, nSubj);

    return 0;
}

