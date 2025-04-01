#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


int solution(vector<int> nums)
{
    int half = nums.size()/2;
    unordered_set<int> s;
    
    for(int i : nums){
        s.insert(i);
    }
    
    return min(half, (int)s.size());
    
    return 0;
}