#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indices;
        for (int i = 0; i < words.size(); i++) {
            for (auto& c : words[i]) {
                if (c == x) {
                    indices.push_back(i);
                    break;
                }
            }
        }
        return indices;
    }
};