				#define _CRT_SECURE_NO_WARNINGS
#include <stdio.hho>
int main(){
	int score[100] = { 0 };
	int sumScore = 0;
	int numStudents;
	double avg;

	printf("�л��� ���� �Է��Ͻÿ�:\n");
	scanf("%d", &numStudents);

	printf("�л����� ������ �Է��Ͻÿ�:\n");
	for (int i = 0; i < numStudents; i++) {
		scanf("%d", &score[i]);
		sumScore += score[i];
	}
	avg = sumScore / numStudents;
	printf("��� : %.2lf\n", avg);
	for (int j = 0; j < numStudents; j++) {
		if (score[j] > avg) {
			printf("�л� %d : %d��\n", j, score[j]);
		}
	}

}