#include <string>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j = 0, n1 = name.length(), n2 = typed.length();
        if (n2 < n1) return false;
        
        for (int i = 0; i < n2; i++) {
            if (typed[i] == name[j]) {
                j++;
            }
            else if (j == 0 || typed[i] != name[j - 1]) {
                return false;
            }
        }
        return j == n1;
    }
};