#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(){
	int N, num = 0;
	int arr[10] = {0, };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &N);
		arr[i] = (N % 42);
	}
	
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i+1 ; j < 10; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count == 0) {
			num++;
		}
	}
	printf("%d", num);

	return 0;
}
