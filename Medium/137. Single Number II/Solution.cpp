#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }
        for (auto pair : counts) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        return -1;
    }
};