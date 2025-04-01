#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool isPrime(int num){
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(void){
    int n, result = 0;

    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        if(isPrime(v[i])){
            result++;
        }
    }

    cout << result << '\n';

    return 0;
}
