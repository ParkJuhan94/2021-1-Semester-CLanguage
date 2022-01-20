//27180 포인터로 scanf 유사함수

#include <stdio.h>
#include <ctype.h>

// scan_int는 정수를 읽어서 값을 포인터를 통해 돌려주는 함수로서
// scanf와 비슷하지만 포맷을 사용하지 않는다.
// 또한 성공 여부를 반환값을 통하여 알려주어야 한다.
// 1이면 성공 0이면 실패
int scan_int(int* pData) {    
    int n;  
    int chk;
    *pData = 0;
    
    for (chk = 0; 1; chk++ ) {
        n = getchar();        
        if (isdigit(n)) {   //정수일때      
            if (chk == 0) {
                *pData = 0;
            }
            *pData = (*pData * 10) + (n - '0');
        }
        else if (isspace(n)) {  //공백일때
            chk = 0;
            if (*pData != 0) {  //공백이 연속될때 출력되는걸 방지
                return 1;
            }
        }
        else {
            return 0;
        }
    }    
}

int main() {
    int mydata;

    while (scan_int(&mydata) == 1) {
        printf("읽은 값은 %d 입니다.\n", mydata);        
        mydata = 0;
    }
    return 0;
}

