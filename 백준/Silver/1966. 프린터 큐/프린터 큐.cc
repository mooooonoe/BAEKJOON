#include <iostream>
#include <queue>

using namespace std;

// 프린터큐 실버 3
// FIFO // 가장 앞에 있는 문서의 중요도를 확인
// 중요도가 높은 문서가 있다면 - 이 문서를 가장 뒤에 재배치 // 그렇지 않으면 바로 인쇄
// 숫자 클수록 중요한 문서 

// 각 tc 는 두줄 씩
// 첫번째 줄에는 - 문서의 개수 n 면번재로 인쇄 되었는지 궁금한 문서 가 현재 큐에 몇번째에 놓여있는 번호 m
// n개 문서의 중요도 차례로

int main(void){
    int tc = 0;
    cin >> tc;

    while(tc--){
        int n,m;
        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            q.push({x, i});
            pq.push(x);
        }

        int result = 0;
        while(!q.empty()){
            int cur_priority = q.front().first;
            int cur_index = q.front().second;
            q.pop();

            if (cur_priority == pq.top()) {
                result++;
                pq.pop();
                if (cur_index == m) {
                    cout << result << '\n';
                    break;
                }
            } else {
                q.push({cur_priority, cur_index});
            }
        }

    }


    return 0;
}