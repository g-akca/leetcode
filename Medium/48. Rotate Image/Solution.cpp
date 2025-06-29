#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n / 2; i++) {
            int last = n - i - 1;
            for (int j = i; j < last; j++) {
                int top = matrix[i][j];

                matrix[i][j] = matrix[n - j - 1][i];
                matrix[n - j - 1][i] = matrix[last][n - j - 1];
                matrix[last][n - j - 1] = matrix[j][last];
                matrix[j][last] = top;
            }
        }
    }
};