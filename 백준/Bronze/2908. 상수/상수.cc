#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int one = 0; 
	int two = 0;

	scanf("%d %d", &one, &two);

	one = (one / 100) + ((one % 100) - (one % 10)) + (one % 10) * 100;
	two = (two / 100) + ((two % 100) - (two % 10)) + (two % 10) * 100;

	int out = 0;

	out = (one > two) ? one : two;
	printf("%d", out);

	//int one[3] = { 0, }, two[3] = { 0, };
	//int numone = 0, numtwo = 0;
	//int put = 0;

	//for (int i = 0; i < 3; i++) {
	//	scanf("%d", one[i]);
	//}

	//numone = (100 * one[2]) + (10 * one[1]) + one[0];

	//getchar();

	//for (int i = 3; i < 0; i--) {
	//	scanf("%d", two[i - 1]);
	//}

	//numtwo = (100 * two[0]) + (10 * two[1]) + two[2];

	//put = (numone > numtwo) ? numone : numtwo;

	//printf("%d", put);

	return 0;
}
