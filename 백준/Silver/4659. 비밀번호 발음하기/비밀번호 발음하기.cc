#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool check(string s) {
    bool has_vowel = false;
    int vowel_cnt = 0, consonant_cnt = 0;
    char prev = '\0';

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        // 모음 확인
        if (is_vowel(c)) {
            has_vowel = true;
            vowel_cnt++;
            consonant_cnt = 0;
        } else {
            consonant_cnt++;
            vowel_cnt = 0;
        }

        // 모음/자음 3개 연속이면 실패
        if (vowel_cnt == 3 || consonant_cnt == 3)
            return false;

        // 같은 글자 두 번 연속 (단, ee, oo는 예외)
        if (i > 0 && c == prev && c != 'e' && c != 'o')
            return false;

        prev = c;
    }

    return has_vowel;
}

int main() {
    string s;
    while (true) {
        cin >> s;
        if (s == "end") break;

        if (check(s)) {
            cout << "<" << s << "> is acceptable.\n";
        } else {
            cout << "<" << s << "> is not acceptable.\n";
        }
    }

    return 0;
}
