#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    // 등차수열의 합: price * (1 + 2 + ... + count) = price * count * (count + 1) / 2
    long long total = (long long)price * count * (count + 1) / 2;

    // 부족한 금액이 없으면 0을 반환
    return total > money ? total - money : 0;
}
