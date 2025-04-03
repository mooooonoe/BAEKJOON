#include <iostream>  
#include <vector>
using namespace std;

// 셀프 넘버
// 양의 정수 n에 대해서 d(n) 을 n과 n의 각 자리수를 더하는 함수라고 정의 


// d(n) 함수 정의: n + 각 자리수의 합
int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;  // 마지막 자리수 더하기
        n /= 10;        // 한 자리 줄이기
    }
    return sum;
}

int main() {
    const int LIMIT = 10000;
    vector<bool> isGenerated(LIMIT + 1, false);  // d(n)으로 만들어진 수 표시

    // 1부터 LIMIT까지 d(n) 계산해서 표시
    for (int i = 1; i <= LIMIT; i++) {
        int dn = d(i);
        if (dn <= LIMIT) {
            isGenerated[dn] = true;
        }
    }

    // 셀프 넘버 출력
    for (int i = 1; i <= LIMIT; i++) {
        if (!isGenerated[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}
