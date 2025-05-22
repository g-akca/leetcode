#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<unordered_set<char>> rows = {{'q','w','e','r','t','y','u','i','o','p'}, {'a','s','d','f','g','h','j','k','l'}, {'z','x','c','v','b','n','m'}};
        vector<string> result;

        for (auto& word : words) {
            int row = 2;
            if (rows[0].find(tolower(word[0])) != rows[0].end()) row = 0;
            else if (rows[1].find(tolower(word[0])) != rows[1].end()) row = 1;
            bool flag = true;

            for (int j = 1; j < word.length(); j++) {
                if (rows[row].find(tolower(word[j])) == rows[row].end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) result.push_back(word);
        }

        return result;
    }
};