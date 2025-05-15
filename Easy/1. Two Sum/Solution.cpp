#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums2;
        for (int i = 0; i < nums.size(); i++) {
            if (nums2.find(target - nums[i]) != nums2.end()) {
                return {nums2[target - nums[i]], i};
            }
            nums2[nums[i]] = i;
        }
        return {-1, -1};
    }
};