#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].length();
        for (auto& s : strs) {
            if (s.length() < n) n = s.length();
        }
        
        string res;
        for (int i = 0; i < n; i++) {
            char c = strs[0][i];
            bool include = true;
            for (auto& s : strs) {
                if (s[i] != c) include = false;
            }
            if (include) res += c;
            else break;
        }
        return res;
    }
};