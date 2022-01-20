#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BSIZE 10    // Board size
#define BLACK_STONE "��"  // �������� �����̸� �̰� ������
#define WHITE_STONE "��"
#define CROSS "��"
#define BLACK  1  // �迭�� �����ϴ� ��
#define WHITE  -1
int isValid(int data[BSIZE][BSIZE], int row, int col) {
    if (row < 0 || col < 0 || row >= BSIZE || col >= BSIZE)
        return 0;
    if (data[row][col] == 0)
        return 1;
    else
        return 0;
}
int getPosition(int pos[2]) {
    printf("���ȣ�� ����ȣ�� �Է��ϼ���: ");
    if (scanf("%d%d", &pos[0], &pos[1]) == 2)
        return 1;
    else
        return 0;
}

void draw(int data[BSIZE][BSIZE]) {
    //
    for (int c = 0; c < BSIZE; c++) {
        printf("%2d", c);
    }
    printf("\n");
    for (int r = 0; r < BSIZE; r++) {
        printf("%1d", r);
        for (int c = 0; c < BSIZE; c++) {
            if (data[r][c] == WHITE) printf(WHITE_STONE);
            else if (data[r][c] == BLACK) printf(BLACK_STONE);
            else printf(CROSS);
        }
        printf("\n");
    }
    printf("\n");
}


int count_h(int data[BSIZE][BSIZE], int row, int col) {   //������ ���
    int count = 1;
    for (int i = 1; i <= col; i++) {
        if (data[row][col - i] == data[row][col]) {
            count++;
        }
        else {
            break;
        }
    }
    for (int i = 1; i <= BSIZE - 1 - col; i++) {
        if (data[row][col + i] == data[row][col]) {
            count++;
        }
        else {
            break;
        }
    }
    return count;
}


int count_v(int data[BSIZE][BSIZE], int row, int col) {   //������ ���
    int count = 1;
    for (int i = 1; i <= row; i++) {
        if (data[row - i][col] == data[row][col]) {
            count++;
        }
        else {
            break;
        }
    }
    for (int i = 1; i <= BSIZE - 1 - row; i++) {
        if (data[row + i][col] == data[row][col]) {
            count++;
        }
        else {
            break;
        }
    }
    return count;
}


int count_d(int data[BSIZE][BSIZE], int row, int col) {    //�밢�� ��� : �밢�� ���� �¸��ȵǴ°� �����ؾ���
    int count = 1;                                          //���밢���� okay.
    for (int i = 1; i <= col; i++) {
        if (data[row - i][col - i] == data[row][col]) {
            count++;
        }
        else {
            break;
        }
    }
    for (int i = 1; i <= BSIZE - 1 - col; i++) {
        if (data[row + i][col + i] == data[row][col]) {
            count++;
        }
        else {
            break;
        }
    }
    return count;
}


int win(int data[BSIZE][BSIZE], int row, int col) {
    if (count_h(data, row, col) == 5 || count_v(data, row, col) == 5 || count_d(data, row, col) == 5) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int board[BSIZE][BSIZE] = { 0 };  // ���� 0���� �ʱ�ȭ.
    int turn = BLACK;
    int pos[2]; // 0���� ���ȣ, 1���� ����ȣ

    // ���� �� ���� �׷��ش�.
    draw(board);
    while (getPosition(pos)) {
        if (isValid(board, pos[0], pos[1])) {
            board[pos[0]][pos[1]] = turn;
            draw(board);
            if (win(board, pos[0], pos[1])) {
                if (turn == WHITE) {
                    printf("��(%s)�� �̰���ϴ�.\n", WHITE_STONE);
                }
                else {
                    printf("��(%s)�� �̰���ϴ�.\n", BLACK_STONE);
                }
                return 0;
            }
            turn = -turn;
        }
        else {
            printf("���� �� ���� ��ġ�Դϴ�.\n");
            continue;
        }
    }
    return 0;
}
