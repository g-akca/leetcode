#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> counts(3, 0);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            counts[nums[i]]++;
        }

        int j = 0;
        for (int i = 0; i < n; i++) {
            while (counts[j] == 0) j++;
            nums[i] = j;
            counts[j]--;
        }
    }
};