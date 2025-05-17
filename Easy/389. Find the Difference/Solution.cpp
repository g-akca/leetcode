#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = t[0] - 'a';
        for (int i = 0; i < s.length(); i++) {
            sum += (t[i + 1] - 'a') - (s[i] - 'a');
        }
        return sum + 'a';
    }
};