#include <iostream>
#include <vector>

using namespace std;

int toInt(string s){
    // cout << "toInt";
    if(s == "zero") return 0;
    if(s == "one") return 1;
    if(s == "two") return 2;
    if(s == "three") return 3;
    if(s == "four") return 4;
    if(s == "five") return 5;
    if(s == "six") return 6;
    if(s == "seven") return 7;
    if(s == "eight") return 8;
    if(s == "nine") return 9;

}

int solution(string s){
    int answer = 0;
    string result = "";
    string tmp = "";
    for(char c:s){
        if(48 <= c && c<= 57){
            result.push_back(c);
            // cout << c;
        }
        else{
            tmp.push_back(c);
            if(tmp == "zero" ||
                tmp == "one" ||
                tmp == "two" ||
                tmp == "three" ||
                tmp == "four" ||
                tmp == "five" ||
                tmp == "six" ||
                tmp == "seven" ||
                tmp == "eight" ||
                tmp == "nine" 
            )
            {
                // result.push_back(toInt(tmp));
                result.push_back(toInt(tmp)+'0');
                tmp = "";
            }
        }
    }

    // cout << result;
    // answer = stoi(result);

    answer = stoi(result);
    return answer;
}