#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(){
	//N개의 바구니 //1~N 번 까지 번호 적힌 공 
	//M번 공을 넣을 수 있

	int N = 0;
	int M = 0;
	int arr[100] = { 0, };

	scanf("%d %d", &N, &M);

	int i, j, k = 0;
	for (int l = 0; l < M; l++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int u = i; u <= j; u++) {
			arr[u-1] = k;
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}

//제일 쉽다고 생각하는 반복문 문법 오류 때문에 오래 걸렸다 ..! 가운데 조건은 항상 부등호의 범위로 할 것 ..! 대입 연산자 아님 ..!
