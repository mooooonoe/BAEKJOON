#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num=0;
	scanf("%d", &num);
	
	int i,j,k=0;
	for(i=0; i<num; i++){
		for(j=i; j<num-1; j++){
			printf(" ");
		}
		for(k=0; k<=(i*2); k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=(num-1); i>0; i--){
		for(j=i; j<=num-1; j++){
			printf(" ");
		}
		for(k=0; k<=((i-1)*2); k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}