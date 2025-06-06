#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        if (n == 0) return true;

        for (int i = 0; i < s; i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == s - 1 || flowerbed[i + 1] == 0)) {
                if (--n == 0) return true;
                flowerbed[i] = 1;
            }
        }
        return false;
    }
};