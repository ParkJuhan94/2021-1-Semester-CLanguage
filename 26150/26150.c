//26150 하노이타워

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 디스크 1개를 이동할 때는 이 함수를 호출한다.
void move_one(int from, int to) {
    printf("디스크 한개를 이동합니다. %d --> %d\n", from, to);
}

void sohn(int size, int from, int to) {
    if (size == 1) {
        move_one(from, to);
    }
    else {
        int tmp = 6 - (from + to);
        sohn(size - 1, from, tmp);  //임시로 덩어리를 이동
        move_one(from, to);
        sohn(size - 1, tmp, to);
    }
}

int main() {
    int size;
    scanf("%d", &size);
    sohn(size, 1, 3);
}