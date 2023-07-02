#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>

int main() {
    char arr[100] = { 0, };
    scanf("%s", arr);

    int count = 0;
    count = strlen(arr);

    for (int i = 0; i <= 25; i++) {
        for (int j = 0; j <= count; j++) {
            if (arr[j] == 97 + i) {
                printf("%d ", j);
                break;
            }
            if (j == count) {
                printf("-1 ");
            }
        }

    }

    return 0;
}

        //아니 자고 일어나니까 바로 풀림 어이없서
