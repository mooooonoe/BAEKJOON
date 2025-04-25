#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> name_to_yearning;

    // name과 yearning 매핑
    for(int i = 0; i < name.size(); i++){
        name_to_yearning[name[i]] = yearning[i];
    }

    // photo마다 합산
    for(auto p : photo){
        int total = 0;
        for(auto pp : p){
            if(name_to_yearning.count(pp)){
                total += name_to_yearning[pp];
            }
        }
        answer.push_back(total);
    }
    return answer;
}
