//27180 �����ͷ� scanf �����Լ�

#include <stdio.h>
#include <ctype.h>

// scan_int�� ������ �о ���� �����͸� ���� �����ִ� �Լ��μ�
// scanf�� ��������� ������ ������� �ʴ´�.
// ���� ���� ���θ� ��ȯ���� ���Ͽ� �˷��־�� �Ѵ�.
// 1�̸� ���� 0�̸� ����
int scan_int(int* pData) {    
    int n;  
    int chk;
    *pData = 0;
    
    for (chk = 0; 1; chk++ ) {
        n = getchar();        
        if (isdigit(n)) {   //�����϶�      
            if (chk == 0) {
                *pData = 0;
            }
            *pData = (*pData * 10) + (n - '0');
        }
        else if (isspace(n)) {  //�����϶�
            chk = 0;
            if (*pData != 0) {  //������ ���ӵɶ� ��µǴ°� ����
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
        printf("���� ���� %d �Դϴ�.\n", mydata);        
        mydata = 0;
    }
    return 0;
}

