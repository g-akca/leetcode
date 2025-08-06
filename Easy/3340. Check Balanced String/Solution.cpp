#include <string>
using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int sum = 0, n = num.length();
        for (int i = 0; i < n; i += 2) {
            if (i != n - 1) sum += num[i] - num[i + 1];
            else sum += num[i] - '0';
        }
        
        if (sum == 0) return true;
        else return false;
    }
};