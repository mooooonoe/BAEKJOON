#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//i부터 j 까지 정렬 했을 때 K 번째에 있는 수 return 

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto cmd : commands){
        int i = cmd[0];
        int j = cmd[1];
        int k = cmd[2];
        
        vector<int> temp(array.begin()+i-1, array.begin()+j);
        
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[k-1]);
    }
    
    return answer;
}