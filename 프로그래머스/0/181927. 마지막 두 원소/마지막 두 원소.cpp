#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int sz = num_list.size();
    int tmp;
    
    if(num_list[sz-2] < num_list[sz-1]){
        tmp = num_list[sz-1] - num_list[sz-2] ; 
    }
    else{
        tmp = num_list[sz-1]*2;
    }
    
    num_list.push_back(tmp);
    answer = num_list;
    
    return answer;
}