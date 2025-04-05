#include <iostream>
#include <vector>

using namespace std;

// 올림픽 실버 5
// 금 수 / 금 같으면 은 수 / 금 은 수 같으면 동
// 한 국가의 등수는 자신보다 잘한 나라 수 + 1
// 금은동 모두 같으면 두 나라 등수 같음

int main(void){

    // n 국가 수 // k 등수 알고 싶은 국가 

    int n, k = 0;
    cin >> n >> k;

    // n 개의 줄동안 각 국가 정수, 금, 은, 동

    // vector <vector<int>> v(0, vector<int> (0));
    vector <vector<int>> v(n, vector<int>(4));

    // for(int i=0; i<4; i++){
    //     for(int j=0l j<n; j++){
            
    //     }
    // }
    for(int i=0; i<n; i++){
        cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
    }


    int targetGold, targetSilver, targetBronze;
    
    for(int i=0; i<n; i++){
        if(v[i][0] == k){
            targetGold = v[i][1];
            targetSilver = v[i][2];
            targetBronze = v[i][3];
            break;
        }
    }

    int rank = 1;
    
    for(int i=0; i<n; i++){
        int g = v[i][1];
        int s = v[i][2];
        int b = v[1][3];

        if(g>targetGold) rank++;
        else if(g==targetGold && s>targetSilver) rank++;
        else if(g==targetGold && g==targetSilver && b>targetBronze) rank++;
    }

    cout << rank << '\n';
    return 0;
}