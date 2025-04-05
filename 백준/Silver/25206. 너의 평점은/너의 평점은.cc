#include <iostream>
#include <iomanip> 

using namespace std;

// 너의 평점은 실버 3
// 전공평점이 3.3 이상
// 전공평점 계산 프로그램 
// p 또는 F 는 제외

// 전공 평점 계산 방법 *** 
// 전공과목별 (학점 × 과목평점)의 합을 학점의 총합으로 나눈 값

int main(void){
    string s, grade;
    float result, total_num, total_sum = 0.0;

    for(int i=0; i<20; i++){
        cin >> s >> result >> grade;
        if(grade == "P"){
            continue;
        }
        else if(grade == "A+") total_sum += result * 4.5; 
        else if(grade == "A0") total_sum += result * 4.0; 
        else if(grade == "B+") total_sum += result * 3.5; 
        else if(grade == "B0") total_sum += result * 3.0; 
        else if(grade == "C+") total_sum += result * 2.5; 
        else if(grade == "C0") total_sum += result * 2.0;
        else if(grade == "D+") total_sum += result * 1.5; 
        else if(grade == "D0") total_sum += result * 1.0;  

        else if(grade == "F")  total_sum += result * 0.0;  // ❗ F도 포함!

        total_num += result;
    }

    // cout << total_sum << '\n';

    cout << fixed << setprecision(6);
    if(total_num == 0) {
        cout << 0.0 << '\n';
    } else {
        cout << total_sum / total_num << '\n';
    }


    return 0;
}