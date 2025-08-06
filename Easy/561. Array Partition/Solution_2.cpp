#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        priority_queue<int, vector<int>, greater<int>> sorted_nums(nums.begin(), nums.end());

        while (!sorted_nums.empty()) {
            sum += sorted_nums.top();
            sorted_nums.pop();
            sorted_nums.pop();
        }
        return sum;
    }
};