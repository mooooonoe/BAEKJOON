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

//이 문제의 케이스가 너무 많아서 띄어쓰기 개수 세는 문제로 단순히 생각했다가 큰 코 다쳤다
//띄어쓰기 가 아니라 단어의 개수 인것을 명심해야 하고
//맨 앞과 뒤에 띄어쓰기 가 있는 경우를 모두 고려해야 한다
