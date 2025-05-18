#include <vector>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> counts;
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }

        priority_queue<pair<int, int>> ordered;
        
        for (auto& c : counts) {
            ordered.push({c.second, c.first});
        }
        
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(ordered.top().second);
            ordered.pop();
        }
        return result;
    }
};