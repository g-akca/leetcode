#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> counts;
        for (char& c : s) {
            counts[c]++;
        }
        
        priority_queue<pair<int, char>> pq;
        for (auto& [ch, count] : counts) {
            pq.push({count, ch});
        }

        string res;
        while (!pq.empty()) {
            auto [freq, ch] = pq.top();
            pq.pop();
            res.append(freq, ch);
        }
        return res;
    }
};