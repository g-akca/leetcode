#include <string>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        bool non_pair = true;
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '|') non_pair = !non_pair;
            else if (non_pair && s[i] == '*') total++;
        }

        return total;
    }
};