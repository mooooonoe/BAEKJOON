#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char c : myString){
        if(c<'a'){
            c = tolower(c);
            answer.push_back(c);
        }
        else{
            answer.push_back(c);
        }
    }
    return answer;
}