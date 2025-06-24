#include <vector>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max_len = 1, current_inc = 1, current_dec = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                current_inc++;
                current_dec = 1;
                max_len = max(max_len, current_inc);
            }
            else if (nums[i] < nums[i - 1]) {
                current_dec++;
                current_inc = 1;
                max_len = max(max_len, current_dec);
            }
            else {
                current_dec = 1;
                current_inc = 1;
            }
        }

        return max_len;
    }
};