#include <string>
using namespace std;

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int longest = 1, current_len = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1] + 1) current_len++;
            else current_len = 1;
            longest = max(longest, current_len);
            if (longest == 26) break;
        }
        return longest;
    }
};