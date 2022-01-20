#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_CRS 10 // 최대 과목수
#define MAX_STU 100
int main() {
    int score[MAX_CRS][MAX_STU];
    int stu_id[MAX_STU];
    int num_stu;
    int num_crs;

    scanf("%d %d", &num_stu, &num_crs);
    printf("학생수 %d  과목수 %d\n", num_stu, num_crs);
    for (int stu = 0; stu < num_stu; stu++) {
        scanf("%d", &stu_id[stu]);
    }
    for (int stu = 0; stu < num_stu; stu++) {
        printf("%d ", stu_id[stu]);
    }

    //성적입력
    for (int crs = 0; crs < num_crs; crs++) {
        for (int stu = 0; stu < num_stu; stu++) {
            scanf("%d", &score[crs][stu]);
        }
    }
    //성적출력
    for (int crs = 0; crs < num_crs; crs++) {
        for (int stu = 0; stu < num_stu; stu++) {
            printf("%d\t", score[crs][stu]);
        }
        printf("\n");
    }

    //학생 stu의 합계는 어디?
    //score[0][stu] score[1][stu] ... score[num_crs-1][stu]
    score[num_crs][num_stu] = 0;
    for (int stu = 0; stu < num_stu; stu++) {
        for (int crs = 0; crs < num_crs; crs++) {
            score[num_crs][stu] += score[crs][stu];
        }
    }
    //합계까지 출력
    for (int crs = 0; crs < num_crs; crs++) {
        printf("%d\t", stu_id[stu]);
        for (int stu = 0; stu < num_stu; stu++) {
            printf("%d\t", score[crs][stu]);
        }
        printf("\n");
    }
}


}