#include <bits/stdc++.h>

using namespace std;


int main(void){

    string input_s, comp_s, f;

    cin >> input_s;
    cin >> comp_s;

    for(char c : input_s){
        if(isalpha(c)){
            f += c;
        }
    }

    if (f.find(comp_s)!=string::npos){ //string::find()를 사용해서 키워드 K가 포함되어 있는지 확인
        cout<<1;
    }
    else{
        cout<<0;
    }


    return 0;
}
