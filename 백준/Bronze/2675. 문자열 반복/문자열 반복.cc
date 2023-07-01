#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, r, j;
	char s[20];

	scanf("%d", &t);

	for (int i = 0; i < t; ++i) {
		scanf("%d %s", &r, &s);

		j = 0;
		while (s[j]) {
			for (int k = 0; k < r; ++k) {
				printf("%c", s[j]);
			}
			++j;
		}
		printf("\n");
	}
	return 0;
}