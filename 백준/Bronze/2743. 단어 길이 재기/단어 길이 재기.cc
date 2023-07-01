#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>

int main() {

	char str[100] = { 0, };
	scanf("%s", str);
	printf("%d", strlen(str));

	return 0;
}


//strlen 사용 시,
//#include<cstring> //string.h 도 cstring.h 도 아님 조심 !!
