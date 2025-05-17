#include <vector>
using namespace std;

class Solution {
public:
    long zeroFilledSubarray(vector<int>& nums) {
        long subarrays = 0;
        int current = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                current++;
                subarrays += current;
            }
            else {
                current = 0;
            }
        }
        return subarrays;
    }
};