#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main() {
	int N = 9;
	int input, pos = 0;
	//int* arr = (int*)malloc(sizeof(int) * N);

	//input

	int j = 0;
	int min = 1000000;
	int max = -1000000;

	for (j = 0; j < N; j++) {
		scanf("%d", &input);

		if (input > max) {
			max = input;
			pos = j+1;
		}
	}

	//output
	printf("%d\n%d", max, pos);

	//malloc free
	//free(arr);

	return 0;
}
