#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int w, int num) {
    
    int answer = 0;
    
    // 총 층     
    int floornum = n/w;
    if(n%w){
        floornum+=1;
    }
    // 마지막 층 
    int finalnum = floornum;
    
    bool finaldir = true; // false -> true <- 
    if(finalnum%2){ finaldir = false; }
    
    int finalremain = n - ((finalnum-1)*w);
    
    // num
    int targetnum =  (num / w);
    if(num % w) { 
        targetnum += 1;
    }
    
    bool targetdir = true;
    if(targetnum%2){ targetdir = false; }
    
    int targetremain = num - ((targetnum-1)*w);

    cout << targetremain << finalremain;
    // 방향 같은 경우
        // id 값 final < target // -1
    // 방향 다른 경우
        // id 값 final // 두 숫자의 합이 w 보다 큰지 체크
    
    answer = finalnum - targetnum;
    
    
    if(finaldir == targetdir){
        if(finalremain >= targetremain){
             answer+= 1;
        }
    }
    else{
        if((w-finalremain) <= targetremain){
            answer += 1;
        }
    }
    
    

    return answer;
}