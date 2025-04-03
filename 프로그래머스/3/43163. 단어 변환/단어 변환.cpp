#include <string>
#include <vector>

using namespace std;

int answer = 1e9;  // 최소 단계 수 저장

bool canChange(string a, string b) {
    int diff = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) diff++;
    }
    return diff == 1;
}

void DFS(string begin, string target, vector<string>& words, vector<bool>& visited, int count) {
    if (begin == target) {
        if (answer > count) answer = count;
        return;
    }

    for (int i = 0; i < words.size(); i++) {
        if (!visited[i] && canChange(begin, words[i])) {
            visited[i] = true;
            DFS(words[i], target, words, visited, count + 1);
            visited[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    vector<bool> visited(words.size(), false);
    DFS(begin, target, words, visited, 0);

    return (answer == 1e9) ? 0 : answer;
}
