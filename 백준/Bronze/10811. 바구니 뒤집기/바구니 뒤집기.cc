#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main() {
	int N, num = 0;
	int arr[100] = { 0, };

	scanf("%d %d", &N, &num);

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	int a = 0;
	int b = 0;
	int temp = 0;

	/*for (int i = 0; i < num; i++) {
		b = 0;
		scanf("%d %d", &a, &b);
		for (int j = 1; j <= b; j++) {
			arr[j] = arr[b];
			b--;
		}
	}*/

	while (num--) {
		scanf("%d %d", &a, &b);

		for (int i = 0; i <= (b - a) / 2; i++) {
			temp = arr[a + i - 1];
			arr[a + i - 1] = arr[b - i - 1];
			arr[b - i - 1] = temp;
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}