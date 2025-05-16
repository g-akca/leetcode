#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                if (s[i + 1] == 'V' || s[i + 1] == 'X') {
                    result--;
                }
                else {
                    result++;
                }
            }
            else if (s[i] == 'V') {
                result += 5;
            }
            else if (s[i] == 'X') {
                if (s[i + 1] == 'L' || s[i + 1] == 'C') {
                    result -= 10;
                }
                else {
                    result += 10;
                }
            }
            else if (s[i] == 'L') {
                result += 50;
            }
            else if (s[i] == 'C') {
                if (s[i + 1] == 'D' || s[i + 1] == 'M') {
                    result -= 100;
                }
                else {
                    result += 100;
                }
            }
            else if (s[i] == 'D') {
                result += 500;
            }
            else if (s[i] == 'M') {
                result += 1000;
            }
        }

        return result;
    }
};