#include <string>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0, max_len = 0, cost = 0;
        for (int right = 0; right < s.length(); right++) {
            cost += abs(s[right] - t[right]);

            while (cost > maxCost) {
                cost -= abs(s[left] - t[left]);
                left++;
            }

            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};