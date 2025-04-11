#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// 대문자는 소문자보다 작음 

string solution(string s) {
    string answer = "";
    // vector<string> result2;
    // vector<string> result1;
    
    vector<char> result;
    
    for(char c:s){
        // cout << c;
        result.push_back(c);
    }
    
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    
    for(char c:result){
        // cout << c;
         answer.push_back(c);
        // result.push_back(c);
    }
    
    return answer;
}