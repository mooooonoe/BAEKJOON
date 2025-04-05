#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int n, m;
vector<pair<int,int>> homes;
vector<pair<int, int>> chickens;

// 치킨 거리 계산
int getD(const vector<pair<int, int>>& selected){
    int total = 0;
    for (auto& h : homes){
        int minDist = INT_MAX;
        for (auto& c : selected){
            int dist = abs(h.first - c.first) + abs(h.second - c.second);
            minDist = min(minDist, dist);
        }
        total += minDist;
    }
    return total;
}

int main(void){
    cin >> n >> m;

    vector<vector <int>> v(n, vector<int>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
            if (v[i][j] == 1) homes.push_back({i, j});
            if (v[i][j] == 2) chickens.push_back({i, j});  // ✅ 고친 부분
        }
    }

    int cSize = chickens.size();
    vector<bool> select(cSize, false);
    fill(select.end() - m, select.end(), true);  // ✅ 이제 문제 없음

    int answer = INT_MAX;

    do{
        vector<pair<int,int>> selected;
        for(int i = 0; i < cSize; i++){
            if(select[i]){
                selected.push_back(chickens[i]);
            }
        }

        int dist = getD(selected);
        answer = min(answer, dist);
    }while(next_permutation(select.begin(), select.end()));

    cout << answer << '\n';
    return 0;
}
