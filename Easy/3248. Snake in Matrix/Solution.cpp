#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int res = 0;
        for (auto& c : commands) {
            if (c == "UP") res -= n;
            else if (c == "RIGHT") res++;
            else if (c == "DOWN") res += n;
            else res--;
        }
        return res;
    }
};