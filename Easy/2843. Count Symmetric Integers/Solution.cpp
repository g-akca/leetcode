#include <string>
#include <numeric>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            string num = to_string(i);
            int n = num.length();
            if (n % 2 != 0) continue;

            if (accumulate(num.begin(), num.begin() + n / 2, 0) == accumulate(num.begin() + n / 2, num.end(), 0)) count++;
        }

        return count;
    }
};