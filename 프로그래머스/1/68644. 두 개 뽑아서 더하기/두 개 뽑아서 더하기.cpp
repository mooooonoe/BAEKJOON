#include <string>
#include <vector>
#include <set>

// 두개의 수를 뽑아 더해서 만들 수 있는 모든 수를 배열에 오름차순
using namespace std;

vector<int> solution(vector<int> numbers) {
    // vector<int> answer;

    set<int> result;
    
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            result.insert(numbers[i] + numbers[j]);
        }
    }
    
    vector<int> answer(result.begin(), result.end());
    
    
    return answer;
}