#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, v, num = 0;
	int arr[101] = { 0, };

	//input

	scanf("%d", &N);



	int i = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);

	int j = 0;
	for (j = 0; j < N; j++) {
		if (arr[j] == v) {
			num++;
		}
	}

	printf("%d", num);
}
