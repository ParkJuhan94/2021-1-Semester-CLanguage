#include <stdio.h>
int main() {
	int sum;   //1, 2, 4, 7 ������ ��
	int gap;   //����. 1, 2, 3, 4 sum�� ���̰�

	sum = 1;   //�ʱ�ȭ

	for (gap = 0; sum <= 100; gap++) {
		sum += gap;
		if (sum <= 100 ) {
			printf("%d ", sum);
		}
	}
	//���� ����� 1 3 6 10 15 21 28 36 45 55 66 78 91 105 �� ��µ�.
	//sum�� 1�� �ʱ�ȭ��Ű��, gap�� 1�� �ƴ� 0���� �����ؾ��Ұ����� ����.
	//���� 100 ���ϱ��� ��¿��� Ʋ����
	return 0;
}