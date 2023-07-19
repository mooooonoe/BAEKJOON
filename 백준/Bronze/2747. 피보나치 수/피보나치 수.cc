#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	int a = 0;
	int b = 1;
	int temp = 0;

	scanf("%d", &num);
	
	if (num < 2) {
		printf("%d", num);
	}

	else {
		for (int i = 1; i < num; i++) {
			temp = a + b;
			a = b;
			b = temp;
		}
		printf("%d", temp);
	}
	return 0;
}