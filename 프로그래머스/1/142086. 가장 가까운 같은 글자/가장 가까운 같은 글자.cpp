#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    vector<char> v;
    int cnt;
    bool state;

    for(auto ch: s){
        cnt = 0;
        state = true;
        if(v.size() == 0){
            // cout << "-1";
            answer.push_back(-1);
            v.push_back(ch);
        }
        else{
            reverse(v.begin(), v.end());
            for(auto vch : v){
                cnt++;
                if(vch == ch){
                    // cout << cnt;
                    answer.push_back(cnt);
                    state = false;
                    reverse(v.begin(), v.end());
                    v.push_back(ch);
                    break;
                }
            }
            if(state){
                reverse(v.begin(), v.end());
                // cout << "-1";
                answer.push_back(-1);
                v.push_back(ch);
            }
        }
    }
    
    return answer;
}