//26150 �ϳ���Ÿ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ��ũ 1���� �̵��� ���� �� �Լ��� ȣ���Ѵ�.
void move_one(int from, int to) {
    printf("��ũ �Ѱ��� �̵��մϴ�. %d --> %d\n", from, to);
}

void sohn(int size, int from, int to) {
    if (size == 1) {
        move_one(from, to);
    }
    else {
        int tmp = 6 - (from + to);
        sohn(size - 1, from, tmp);  //�ӽ÷� ����� �̵�
        move_one(from, to);
        sohn(size - 1, tmp, to);
    }
}

int main() {
    int size;
    scanf("%d", &size);
    sohn(size, 1, 3);
}