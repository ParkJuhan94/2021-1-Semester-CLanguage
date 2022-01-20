				#define _CRT_SECURE_NO_WARNINGS
#include <stdio.hho>
int main(){
	int score[100] = { 0 };
	int sumScore = 0;
	int numStudents;
	double avg;

	printf("학생의 수를 입력하시오:\n");
	scanf("%d", &numStudents);

	printf("학생들의 점수를 입력하시오:\n");
	for (int i = 0; i < numStudents; i++) {
		scanf("%d", &score[i]);
		sumScore += score[i];
	}
	avg = sumScore / numStudents;
	printf("평균 : %.2lf\n", avg);
	for (int j = 0; j < numStudents; j++) {
		if (score[j] > avg) {
			printf("학생 %d : %d점\n", j, score[j]);
		}
	}

}