#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result = "";
        int count = 1;

        while (ss >> word) {
            char first = tolower(word[0]);
            if (!(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u')) word = word.substr(1) + word[0];
            result += word + "ma" + string(count, 'a') + " ";
            count++;
        }

        return result.substr(0, result.length() - 1);
    }
};