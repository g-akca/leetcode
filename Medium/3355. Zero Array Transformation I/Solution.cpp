#include <vector>
using namespace std;

class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), current = 0;
        vector<int> diff(n);
        for (const auto& q : queries) {
            diff[q[0]]--;
            if (q[1] + 1 < n) diff[q[1] + 1]++;
        }

        for (int i = 0; i < n; i++) {
            current += diff[i];
            if (current > -nums[i]) return false;
        }
        return true;
    }
};