#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queue;
        for (int i = 0; i < nums.size(); i++) {
            queue.push({nums[i], i});
        }

        for (int i = 0; i < k; i++) {
            pair<int, int> curr_min = queue.top();
            queue.pop();
            nums[curr_min.second] *= multiplier;
            queue.push({nums[curr_min.second], curr_min.second});
        }
        return nums;
    }
};