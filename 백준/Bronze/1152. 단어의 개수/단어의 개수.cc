#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000000] = { 0, };
    scanf("%[^\n]", arr);

    int sp = 0;

    int count = 0;
    count = strlen(arr);

    if (arr[0] != ' ') {
        sp++;
    }

    for (int i = 1; i < count; i++) {
        //if (i == 0) {
        //    if (arr[i] == ' ') {
        //        sp = 0;
        //    }
        //}
        //else if (arr[i] == ' ') {
        //    sp++;
        //}
        if (arr[i-1] == ' ' && arr[i] != ' ') {
            sp++;
        }

        if (arr[i] == '\0') {
            break;
        }
    }

    printf("%d", sp);
    return 0;
}
