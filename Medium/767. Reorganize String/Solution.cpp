#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        vector<int> counts(26, 0);
        int max = 0, n = s.length(), j = 0;
        for (int i = 0; i < n; i++) {
            if (++counts[s[i] - 'a'] > counts[max]) max = s[i] - 'a';
        }

        if (counts[max] > (n + 1) / 2) return "";

        while(counts[max]-- > 0) {
            s[j] = max + 'a';
            j += 2;
        }

        for (int i = 0; i < 26; i++) {
            while (counts[i]-- > 0) {
                if (j >= n) j = 1;
                s[j] = i + 'a';
                j += 2;
            }
        }
        return s;
    }
};