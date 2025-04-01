#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int prev;
    
    for(int i:arr){
        if(prev == i){
            continue;
        }
        
        answer.push_back(i);
        prev = i;
    }

    
    
    return answer;
}