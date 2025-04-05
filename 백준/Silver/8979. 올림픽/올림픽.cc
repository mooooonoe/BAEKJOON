#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Country {
    int id;
    int gold;
    int silver;
    int bronze;
};

int main() {
    int n, k;
    cin >> n >> k;

    vector<Country> countries(n);
    
    for (int i = 0; i < n; i++) {
        cin >> countries[i].id >> countries[i].gold >> countries[i].silver >> countries[i].bronze;
    }

    // 메달 기준으로 정렬
    sort(countries.begin(), countries.end(), [](const Country& a, const Country& b) {
        if (a.gold != b.gold) return a.gold > b.gold;
        if (a.silver != b.silver) return a.silver > b.silver;
        return a.bronze > b.bronze;
    });

    // 국가 번호별 등수 저장
    vector<int> rank(n + 1);  // 국가 번호는 1부터 시작
    int currentRank = 1;
    rank[countries[0].id] = currentRank;

    for (int i = 1; i < n; i++) {
        if (countries[i].gold == countries[i - 1].gold &&
            countries[i].silver == countries[i - 1].silver &&
            countries[i].bronze == countries[i - 1].bronze) {
            rank[countries[i].id] = currentRank; // 동점자 처리
        } else {
            currentRank = i + 1;
            rank[countries[i].id] = currentRank;
        }
    }

    cout << rank[k] << '\n';
    return 0;
}
