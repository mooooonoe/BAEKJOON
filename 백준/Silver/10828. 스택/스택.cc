#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int num[1000001];
int cnt = 0;

void push(int n) {
	num[cnt] = n;
	cnt++;
}

void pop() {
	if (cnt != 0) {
		cnt--;
		printf("%d\n", num[cnt]);
		num[cnt] = 0;
	}
	else {
		printf("-1\n");
	}
}

void top() {
	if (cnt != 0) {
		printf("%d\n", num[cnt - 1]);
	}
	else {
		printf("%d\n", -1);
	}
}

void size() {
	printf("%d\n", cnt);
}

void empty() {
	if (cnt != 0) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}
}

int main() {
	int one = 0;
	char stack[10] = { 0, };

	scanf("%d", &one);

	int num[100] = { 0, };

	for (int i = 0; i < one; i++) {
		scanf("%s", &stack);
		if (strcmp(stack, "push") == 0) {
			int n = 0;
			scanf("%d", &n);
			push(n);
		}
		else if (strcmp(stack, "pop") == 0) {
			pop();
		}
		else if (strcmp(stack, "top") == 0) {
			top();
		}
		else if (strcmp(stack, "size") == 0) {
			size();
		}
		else if (strcmp(stack, "empty") == 0) {
			empty();
		}
	}
}
