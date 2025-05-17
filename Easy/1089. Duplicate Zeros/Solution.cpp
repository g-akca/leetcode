#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int slide = 0;
        vector<int> original = arr;
        for (int i = 0; i < arr.size() - slide; i++) {
            arr[i + slide] = original[i];
            if (original[i] == 0) {
                if (i + slide + 1 < arr.size()) arr[i + slide + 1] = 0;
                slide++;
            }
        }
    }
};