#include <iostream>

using namespace std;

// 색종이 실버 5
// 가로 세로 크기 각각 100 인 정사각형 모양의 흰색 도화지 
// 색종이 붙이 위치
// 색종이는 가로 세로 각각 10 
// 색종이 붙은 영역의 넓이 출력

int map[100][100] = {0,};

void proc(int cx, int cy){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            map[i+cx-1][j+cy-1] = 1;
        }
    }
}

int main(void){
    int n, cx, cy, result = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> cx >> cy;
        proc(cx, cy);
    }
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(map[i][j] > 0) result++;
        }
    }


    cout << result <<'\n';
    return 0;
}