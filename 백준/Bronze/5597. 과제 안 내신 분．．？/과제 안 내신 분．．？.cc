#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(){
	int N = 0;
	int arr[30] = {0, };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &N);
		arr[N-1] = 1;
	}
	
	for (int i = 0; i < 30; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i+1);
		}
	}

	return 0;
}
