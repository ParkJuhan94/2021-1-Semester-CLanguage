//26170 재귀로 최대값

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//a[start] 부터 a[end]까지의 배열 요소중 최대 값을 반환한다.
int rmax(int a[], int start, int end) {	
	if (start == end) {		//start와 end 값을 비교해 같으면 재귀호출을 하지 않는다
		return a[start];
	}
	int mid = (start + end) / 2;
	int result1 = rmax(a, start, mid);		//mid가 start랑 같아질때까지 반으로 쪼갬
	int result2 = rmax(a, mid + 1, end);	//mid + 1이 end랑 같아질때까지 반으로 쪼갬

	if (result1 >= result2) {	//다 쪼개지면 반환되는 값(= 각각의 요소)을 비교하여 큰 놈이 토너먼트처럼 올라감
		return result1;
	}
	else {
		return result2;
	}
}

//main에서는 10개의 정수를 표준입력에서 입력한 후 rmax(a, 0, 9); 를 호출한다.
int main() {
	int data[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &data[i]);
	}
	printf("최대값은 %d입니다.\n", rmax(data, 0, 9));
}