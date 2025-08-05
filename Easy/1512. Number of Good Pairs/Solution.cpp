#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> counts;
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += counts[nums[i]];
            counts[nums[i]]++;
        }

        return total;
    }
};