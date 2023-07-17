#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //qsort 함수 선언된 헤더파일 

int compare(const void* first, const void* second) {
	int* a = (int*)first;
	int* b = (int*)second;

	if (*a < *b) {
		return -1;
	}
	else {
		return 1;
	}

	//오름차순 정렬

	//내림차순 정렬 -> a<b 일때 1반환

	return 0;
}

int binary(int list[], int n, int key) {
	int left, mid, right;
	left = 0;
	right = n - 1;

	while (left <= right) {
		mid = (left + right) / 2;
		if (list[mid] == key) {
			return 0;
		}

		else if (list[mid] < key) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return 1;
}

int main() {
	int n, m, i, data;
	int* list;

	scanf("%d", &n);

	list = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		scanf(" %d", &list[i]);
	}


	//정렬할 배열, 요소 개수, 요소 크기, 비교함수 
	qsort(list, n, sizeof(list[0]), compare);

	scanf(" %d", &m);

	for (i = 0; i < m; i++) {
		scanf(" %d", &data);
		if (binary(list, n, data) == 0) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}

	free(list);
	return 0;
}

//이진탐색

//중간 값과 찾고자 하는 값 비교
//작으면 중간 값의 좌측과 비교, 크면 우측과 비교
//반복


//qsort 함수 //#include <stdlib.h> //qsort 함수 선언된 헤더파일 

//void qsort (void *base, size_t nel, size_t width, int (*compare)(const void *, const void *);

//base : 정렬하고자 하는 배열의 포인터
//nel : 배열의 각 원소들의 총 수
//width : 배열에서 원소 하나의 크기 
//(*compare) : 비교를 수행할 함수 포인터




