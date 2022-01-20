//26170 ��ͷ� �ִ밪

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//a[start] ���� a[end]������ �迭 ����� �ִ� ���� ��ȯ�Ѵ�.
int rmax(int a[], int start, int end) {	
	if (start == end) {		//start�� end ���� ���� ������ ���ȣ���� ���� �ʴ´�
		return a[start];
	}
	int mid = (start + end) / 2;
	int result1 = rmax(a, start, mid);		//mid�� start�� ������������ ������ �ɰ�
	int result2 = rmax(a, mid + 1, end);	//mid + 1�� end�� ������������ ������ �ɰ�

	if (result1 >= result2) {	//�� �ɰ����� ��ȯ�Ǵ� ��(= ������ ���)�� ���Ͽ� ū ���� ��ʸ�Ʈó�� �ö�
		return result1;
	}
	else {
		return result2;
	}
}

//main������ 10���� ������ ǥ���Է¿��� �Է��� �� rmax(a, 0, 9); �� ȣ���Ѵ�.
int main() {
	int data[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &data[i]);
	}
	printf("�ִ밪�� %d�Դϴ�.\n", rmax(data, 0, 9));
}