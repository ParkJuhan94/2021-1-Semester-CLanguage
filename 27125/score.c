#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getSize(int *s, int *c) {
    printf("�л� ���� �Է��ϼ��� :\n");
    if ( (scanf("%d", s)) == 1) {               
            for (int i = 0; *s <= 0 || 100 < *s; i++) {
                printf("Ʋ�Ƚ��ϴ�.\n");
                scanf("%d", s);
            }
    }   
    else {
        return 0;
    }
    
    printf("���� ���� �Է��ϼ��� :\n");
    if ((scanf("%d", c)) == 1) {
        for (int i = 0; *c <= 0 || 10 < *c; i++) {
            printf("Ʋ�Ƚ��ϴ�.\n");
            scanf("%d", c);
        }
        return 1;
    }
    else {
        return 0;
    }
    
}


int main() {
    int numStu; //�л� ��
    int numCourse; // ���� �� 

    if (getSize(&numStu, &numCourse) == 1) {
        printf("�л� ��: %d ���� ��: %d\n", numStu, numCourse);
    }
    else {
        printf("����\n");
    }

}