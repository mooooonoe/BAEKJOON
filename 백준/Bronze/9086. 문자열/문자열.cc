#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>

int main() {
	int num = 0;
	scanf("%d", &num);

	char str[1000] = { 0, };
	char output[10] = { 0, };
	int count = 0;
	int len = 0;

	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		len = strlen(str);
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				output[count] = str[0];
				count++;
			}
			if (j == 1) {
				output[count] = str[len-1];
				count++;
			}
			if (j == 2) {
				output[count] = '\n';
				count++;
			}
		}
	}
	printf("%s", output);
	return 0;
}