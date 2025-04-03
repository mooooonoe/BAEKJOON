#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> v(n, 1);
    
    for(int l : lost){
        v[l-1]--;   // lost 학생 0
    }
    
    for(int r : reserve){
        v[r-1]++;   // reserve 학생 1
    }
    
    for(int i=1;i<=n;i++){
        if(v[i-1]<1 and 1<i<n){
            if(v[i-2]==2){
                v[i-2]--;
                v[i-1]++;
            }
            else if(v[i] == 2){
                v[i]--;
                v[i-1]++;
            }
        }
    }
    
    for(auto a:v){
        if(a){
            answer++;
        }
    }
    
    
    return answer;
}