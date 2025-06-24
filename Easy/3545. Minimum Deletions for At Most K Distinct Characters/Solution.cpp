#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    int minDeletion(string s, int k) {
        int distinct = 0;
        unordered_map<char, int> counts;
        for (int i = 0; i < s.length(); i++) {
            counts[s[i]]++;
        }

        priority_queue<int, vector<int>, greater<int>> counts2;
        for (auto& m : counts) {
            distinct++;
            counts2.push(m.second);
        }

        if (distinct <= k) return 0;
        int removals = 0;
        for (int i = 0; i < distinct - k; i++) {
            removals += counts2.top();
            counts2.pop();
        }
        return removals;
    }
};