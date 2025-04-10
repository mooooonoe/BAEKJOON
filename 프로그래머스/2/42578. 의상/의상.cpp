#include <string>
#include <vector>
#include <iostream>

using namespace std;
// 매일 다른 옷 조합 
// 각 종류 별로 최대 한가지 의상만 착용
// 의상 일부가 겹치더라도 다른 의상 겹치지 않거나 더 착용하면 -> 다른 방법임
// 최소 한개 이상 

int solution(vector<vector<string>> clothes) {
    
    int answer = 1;
    
    vector<string> cname;
    vector<int> cnum;
    
    // 종류 별로 // 몇개인지 
    for(auto& item : clothes){
       string type = item[1];
        bool found = false;
        
        for(int i=0; i<cname.size(); i++){
            if(cname[i] == type){
                cnum[i]++;
                found = true;
                break;
            }
        }
        
        if(!found){
            cname.push_back(type);
            cnum.push_back(1);
        }
    }
    
    // 총 개수 세기
    // 총 개수 만큼 돌면서 타입마다 하나씩 선택
    for(int i=0; i<cnum.size(); i++){
        answer *= (cnum[i]+1);
    }
    
    
    return answer -1;
}