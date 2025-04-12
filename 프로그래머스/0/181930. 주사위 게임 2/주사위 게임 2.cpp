#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 1부터 6까지 적힌 주사위가 3개
// 세 주사위 굴렀을 때 값 

// 세 숫자 다 다르면 a + b + c
// 세 숫자 중 두개만 같다면 
// 세 숫자 중 세개만 같다면 

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a==b && b==c && a==c){
        answer = (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    }
    else if(a==b || b==c || a==c){
        answer = (a+b+c) * (a*a + b*b + c*c);
    }
    else{
        answer = a+b+c;
    }
    
    return answer;
}