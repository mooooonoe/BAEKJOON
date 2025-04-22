#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// 둘만의 암호
// 두 문자열과 자연수 

// 다음 규칙에 따라 문자열 만듦
// 문자열 s의 각 알파벳을 index 만큼 뒤의 알파벳으로 바꿔줌
// index 만큼의 뒤 알파벳이 z 넘어가면 다시 a
// skip 에 있는 알파벳 제외하고 건너뜀
string solution(string s, string skip, int index) {
    string answer = "";
    
    vector<bool> isSkip(26, false);
    for(char sk : skip){
        isSkip[sk - 'a'] = true;
    }

    for(char ch : s){
        int cnt = 0;
        char cur = ch;
        while(cnt < index){
            cur++;
            if(cur > 'z') cur = 'a';
            if(isSkip[cur - 'a']) continue;
            cnt++;
        }
        answer += cur;
    }
    
    return answer;
}