#include <string>
#include <vector>
#include <iostream>

// 어떤 정수들

// 정수들의 절댓값 차례로 담은 배열과
// 이 정수들의 부호를 차례로 담은 불리언 배열 signs

// 실제 정수들의 합을 구하여 return

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    int cnt = 0;
    for(auto s : signs){
        
        int tmp = absolutes[cnt];
            
        if(s == true){
            answer += tmp;
        }
        else{
            answer -= tmp;

        }
        cnt++;
        // cout << answer << ' ';
    }
    
    
    
    return answer;
}