#include <string>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        if (n <= 2 || title[1] == ' ' || title[2] == ' ') title[0] = tolower(title[0]);
        else title[0] = toupper(title[0]);

        for (int i = 1; i < n; i++) {
            if (title[i - 1] == ' ') {
                if (i >= n - 2 || title[i + 1] == ' ' || title[i + 2] == ' ') title[i] = tolower(title[i]);
                else title[i] = toupper(title[i]);
            }
            else title[i] = tolower(title[i]);
        }
        return title;
    }
};