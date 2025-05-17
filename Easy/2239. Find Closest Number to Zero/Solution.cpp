#include <vector>
#include <climits>
#include <math.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) < abs(closest) || nums[i] == abs(closest)) closest = nums[i];
        }
        return closest;
    }
};