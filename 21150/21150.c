#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_CRS 10 // �ִ� �����
#define MAX_STU 100
int main() {
    int score[MAX_CRS][MAX_STU];
    int stu_id[MAX_STU];
    int num_stu;
    int num_crs;

    scanf("%d %d", &num_stu, &num_crs);
    printf("�л��� %d  ����� %d\n", num_stu, num_crs);
    for (int stu = 0; stu < num_stu; stu++) {
        scanf("%d", &stu_id[stu]);
    }
    for (int stu = 0; stu < num_stu; stu++) {
        printf("%d ", stu_id[stu]);
    }

    //�����Է�
    for (int crs = 0; crs < num_crs; crs++) {
        for (int stu = 0; stu < num_stu; stu++) {
            scanf("%d", &score[crs][stu]);
        }
    }
    //�������
    for (int crs = 0; crs < num_crs; crs++) {
        for (int stu = 0; stu < num_stu; stu++) {
            printf("%d\t", score[crs][stu]);
        }
        printf("\n");
    }

    //�л� stu�� �հ�� ���?
    //score[0][stu] score[1][stu] ... score[num_crs-1][stu]
    score[num_crs][num_stu] = 0;
    for (int stu = 0; stu < num_stu; stu++) {
        for (int crs = 0; crs < num_crs; crs++) {
            score[num_crs][stu] += score[crs][stu];
        }
    }
    //�հ���� ���
    for (int crs = 0; crs < num_crs; crs++) {
        printf("%d\t", stu_id[stu]);
        for (int stu = 0; stu < num_stu; stu++) {
            printf("%d\t", score[crs][stu]);
        }
        printf("\n");
    }
}


}