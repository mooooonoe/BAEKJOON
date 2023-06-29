#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;	//시험 본 과목 개수
	scanf("%d", &num);

	int* arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	int max = 0;	//최댓값
	int pos = 0;
	for (int i = 0; i < num; i++) {
		if (max < arr[i]) {
			max = arr[i];
			pos = i;
		}
	}

	float sum = 0;
	/*for (int i = 0; i < num; i++) { 
		//printf("%d %d %f", arr[i], arr[pos], (float)arr[i]/(float)arr[pos]);
		if (i == pos) {
			sum = sum + (float)arr[i];
			continue;
		}
		else {
			float one = 0;
			one = (float)arr[i] / max;
			arr[i] = (one * 100);
		}

		sum = sum + (float)arr[i];
	}*/										// 이부분 !! 당연히 최고점은 최고점으로 안 나눌 줄 알았는데 .. 문제 를 꼼꼼히 읽자 !!

	for (int i = 0; i < num; i++) {
		sum += (float)arr[i] / max * 100;
	}

	printf("%f", sum / num);
	

	return 0;
}

//소수점 은 항상 조심해야 할것..
