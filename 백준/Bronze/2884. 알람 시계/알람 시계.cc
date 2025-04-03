#include <iostream>  
using namespace std;

// 알람시계
// 45분 일찍 알람 설정하기 

int main(void) {
    int h, m = 0;
    cin >> h >> m;

    m = m-45;
    // (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)
    if(m < 0){
        h-=1;
        m+=60;
        if(h<0){
            h = 23;
        }
    }

    cout << h <<' '<< m << '\n';

    return 0;
}
