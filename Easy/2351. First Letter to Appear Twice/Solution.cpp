#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for (int i = 0; i < s.length(); i++) {
            if (seen.find(s[i]) != seen.end()) {
                return s[i];
            }
            seen.insert(s[i]);
        }
        return -1;
    }
};