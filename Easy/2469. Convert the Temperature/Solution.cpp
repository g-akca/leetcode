#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans = {celsius + 273.15, celsius * 1.8 + 32};
        return ans;
    }
};