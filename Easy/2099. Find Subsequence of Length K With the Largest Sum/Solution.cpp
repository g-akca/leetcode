#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }

        vector<pair<int, int>> vec;
        for (int i = 0; i < k; i++) {
            vec.push_back(pq.top());
            pq.pop();
        }

        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second < b.second;
        });

        vector<int> res;
        for (auto& p : vec) {
            res.push_back(p.first);
        }

        return res;
    }
};