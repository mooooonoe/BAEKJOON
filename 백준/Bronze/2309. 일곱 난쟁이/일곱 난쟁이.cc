#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 9;
    int total_sum = 0;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        total_sum += tmp;
        v.push_back(tmp);
    }

    int target = total_sum - 100;
    int a = -1, b = -1;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] + v[j] == target) {
                a = v[i];
                b = v[j];
                break;
            }
        }
        if (a != -1) break;
    }

    sort(v.begin(), v.end());

    // a, b를 한 번씩만 건너뛰기 위해 flag 사용
    bool a_skipped = false, b_skipped = false;

    for (int i = 0; i < n; i++) {
        if (!a_skipped && v[i] == a) {
            a_skipped = true;
            continue;
        }
        else if (!b_skipped && v[i] == b) {
            b_skipped = true;
            continue;
        }
        cout << v[i] << '\n';
    }

    return 0;
}
