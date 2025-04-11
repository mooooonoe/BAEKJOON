#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
// 과학자의 생산성과 영향력을 나타내는 지표
// 논문 n 편중 h번 인용된 논문이 h편 이상이고 나머지 논문이 h번 이하 인용 되었다면
// h의 최댓값
int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<int>()); // 내림차순 정렬
    int h = 0;
    
    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] >= i + 1) {
            h = i + 1;
        } else {
            break;
        }
    }
    return h;
}
