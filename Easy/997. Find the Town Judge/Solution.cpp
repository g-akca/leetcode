#include <vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusted(n + 1, 0);

        for (auto& t : trust) {
            trusted[t[1]]++;
            trusted[t[0]]--;
        }

        for (int i = 1; i < n + 1; i++) {
            if (trusted[i] == n - 1) return i;
        }
        return -1;
    }
};