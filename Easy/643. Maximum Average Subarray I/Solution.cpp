#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int max_sum = sum;

        for (int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i];
            max_sum = max(sum, max_sum);
        }

        return (double)max_sum / k;
    }
};