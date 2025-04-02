#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    unordered_map <string, int> m;
    
    for(string name : participant){
        m[name]++;
    }
    
    for(string name : completion){
        m[name]--;
    }
    
    for(auto entry : m){
        if(entry.second > 0){
            return entry.first;
        }
    }
    
    
    
    return "";
}