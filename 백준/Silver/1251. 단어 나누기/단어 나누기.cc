#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input, answer = "~";
    cin >> input;

    int len = input.length();
    
    for(int i = 1; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            string part1 = input.substr(0, i);
            string part2 = input.substr(i, j - i);
            string part3 = input.substr(j);

            reverse(part1.begin(), part1.end());
            reverse(part2.begin(), part2.end());
            reverse(part3.begin(), part3.end());

            string combined = part1 + part2 + part3;
            answer = min(answer, combined);
        }
    }

    cout << answer << '\n';
    return 0;
}
