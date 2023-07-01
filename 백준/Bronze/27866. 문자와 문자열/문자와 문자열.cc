#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//단어 s와 정수 j 가 주어졌을 때 s의 i번째 글자 출력
	char str[1000] = { 0, };
	char alpha = 0;
	for (int i = 0; i < 1000; i++) {
		alpha = getchar();
		str[i] = alpha;
		if (alpha == '\n') {
			break;
		}
	}

	int num = 0;
	scanf("%d", &num);
	printf("%c", str[num - 1]);


	return 0;
}