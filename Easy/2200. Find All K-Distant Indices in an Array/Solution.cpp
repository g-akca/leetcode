#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> indices;
        int last = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                for (int j = (i - k > last) ? i - k : last + 1; j <= i + k && j <= nums.size() - 1; j++) {
                    indices.push_back(j);
                }
                last = indices.back();
            }
        }
        return indices;
    }
};