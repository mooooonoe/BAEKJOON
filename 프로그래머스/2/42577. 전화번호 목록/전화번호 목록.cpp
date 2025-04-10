#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// 한 번호가 다른 번호의 접두어 인 경우 확인

bool solution(vector<string> phone_book) {
    //사전 순 정렬
   sort(phone_book.begin(), phone_book.end());
    
    //인접 한 문자열만 비교
    for(int i=0; i<phone_book.size()-1; i++){
        if(phone_book[i+1].find(phone_book[i]) == 0){
            return false;
        }
    }
    
    
    return true;
}