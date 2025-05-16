#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int min_elem = *min_element(arr.begin(), arr.end());
        int max_elem = *max_element(arr.begin(), arr.end());

        if ((max_elem - min_elem) % (n - 1) != 0) return false;
        int diff = (max_elem - min_elem) / (n - 1);
        if (diff == 0) return true;

        vector<bool> seen(n, false);
        for (int i = 0; i < n; i++) {
            int index = (arr[i] - min_elem) / diff;
            if ((arr[i] - min_elem) % diff != 0 || seen[index]) return false;
            seen[index] = true;
        }

        return true;
    }
};