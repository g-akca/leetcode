#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i][0] == '-' || operations[i][1] == '-') result--;
            else result++;
        }

        return result;
    }
};