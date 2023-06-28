#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, X, num = 0;
	int arr[10000] = { 0, };

	//input

	scanf("%d %d", &N, &X);

	int i = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	//output
	int j = 0;
	for (j = 0; j < N; j++) {
		if (arr[j] < X) {
			printf("%d ", arr[j]);
		}
	}

	return 0;
}
