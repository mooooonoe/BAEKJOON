#include <iostream>  
#include <stack>
using namespace std;

// 옥상 정원 꾸미기

int main() {
    long long n, result = 0;
    cin >> n;

    stack<int> s;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;

        while(!s.empty() && s.top() <= tmp){
            s.pop();
        }
        
        result += s.size();

        s.push(tmp);
    }

    cout << result;
}
