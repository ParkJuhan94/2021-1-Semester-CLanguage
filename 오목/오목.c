#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BSIZE 10    // Board size
#define BLACK_STONE "○"  // 바탕색이 검정이면 이게 검은색
#define WHITE_STONE "●"
#define CROSS "┼"
#define BLACK  1  // 배열에 저장하는 값
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
    printf("행번호와 열번호를 입력하세요: ");
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


int count_h(int data[BSIZE][BSIZE], int row, int col) {   //가로줄 계산
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


int count_v(int data[BSIZE][BSIZE], int row, int col) {   //세로줄 계산
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


int count_d(int data[BSIZE][BSIZE], int row, int col) {    //대각선 계산 : 대각선 방향 승리안되는거 수정해야함
    int count = 1;                                          //역대각선은 okay.
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
    int board[BSIZE][BSIZE] = { 0 };  // 전부 0으로 초기화.
    int turn = BLACK;
    int pos[2]; // 0번은 행번호, 1번은 열번호

    // 먼저 빈 판을 그려준다.
    draw(board);
    while (getPosition(pos)) {
        if (isValid(board, pos[0], pos[1])) {
            board[pos[0]][pos[1]] = turn;
            draw(board);
            if (win(board, pos[0], pos[1])) {
                if (turn == WHITE) {
                    printf("백(%s)이 이겼습니다.\n", WHITE_STONE);
                }
                else {
                    printf("흑(%s)이 이겼습니다.\n", BLACK_STONE);
                }
                return 0;
            }
            turn = -turn;
        }
        else {
            printf("놓을 수 없는 위치입니다.\n");
            continue;
        }
    }
    return 0;
}
