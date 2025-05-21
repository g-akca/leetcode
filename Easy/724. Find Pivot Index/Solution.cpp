#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (i != 0) leftSum += nums[i - 1];
            if (sum - nums[i] == 2 * leftSum) return i;
        }
        return -1;
    }
};