#include <stdio.h>
int main() {
	int sum;   //1, 2, 4, 7 각각의 수
	int gap;   //계차. 1, 2, 3, 4 sum의 차이값

	sum = 1;   //초기화

	for (gap = 0; sum <= 100; gap++) {
		sum += gap;
		if (sum <= 100 ) {
			printf("%d ", sum);
		}
	}
	//위를 실행시 1 3 6 10 15 21 28 36 45 55 66 78 91 105 가 출력됨.
	//sum을 1로 초기화시키고, gap이 1이 아닌 0으로 시작해야할것으로 보임.
	//또한 100 이하까지 출력에서 틀렸음
	return 0;
}