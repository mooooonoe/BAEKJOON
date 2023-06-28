#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	int input = 0;
	//int* arr = (int*)malloc(sizeof(int) * N);

	//input
	scanf("%d", &N);

	/*int i = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}*/

	//sort
	int j = 0;
	int min = 1000000;
	int max = -1000000;

	for (j = 0; j < N; j++) {
		scanf("%d", &input);
		if (input < min) {
			min = input;
		}

		if (input > max) {
			max = input;
		}
	}

	//output
	printf("%d %d", min, max);

	//malloc free
	//free(arr);

	return 0;
}

//배열만 쓰니까 InsufficientSpace 에러가 발생
//동적 배열 써도 마찬가지로 에러가 발생

//배열 쓰지 않는 방식으로 수정
