#include <iostream>
#include <deque>

using namespace std;

// 덱 실버 3
// 정수 저장하는 디큐 구현 .. // 명령 처리 프로그램

int main(void){
    int n, num = 0;;
    cin >> n;

    string cmd;

    deque<int> q;

    for(int i=0; i<n; i++){
        cin >> cmd;

        if(cmd == "push_back"){
            cin >> num;
            q.push_back(num);
        }
        else if(cmd == "push_front"){
            cin >> num;
            q.push_front(num);
        }
        else if(cmd == "front"){
            if(q.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout << q.front() << '\n';  
            }
        }
        else if(cmd == "back"){
            if(q.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout <<q.back() << '\n';
            }
        }
        else if(cmd == "size"){
            cout << q.size() << '\n';
        }
        else if(cmd == "pop_front"){
            if(q.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout << q.front() << '\n';
                q.pop_front();
            }
        }
        else if(cmd == "pop_back"){
            if(q.empty()){
                cout << "-1"<< '\n';
            }
            else {
                cout << q.back() << '\n';
                q.pop_back();
            }
        }
        else if(cmd == "empty"){
            if(q.empty()){
                cout << '1'<< '\n';
            }
            else {
                cout << '0'<< '\n';
            }
        }

    }

    return 0;
}