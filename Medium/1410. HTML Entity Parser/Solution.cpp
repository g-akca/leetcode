#include <string>
using namespace std;

class Solution {
public:
    string entityParser(string text) {
        int begin = -1;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == '&') begin = i;
            else if (begin != -1 && text[i] == ';') {
                string html = text.substr(begin + 1, i - begin - 1);
                string replacement = "";

                if (html == "quot") replacement = "\"";
                else if (html == "apos") replacement = "'";
                else if (html == "amp") replacement = "&";
                else if (html == "gt") replacement = ">";
                else if (html == "lt") replacement = "<";
                else if (html == "frasl") replacement = "/";

                if (!replacement.empty()) {
                    text.replace(begin, i - begin + 1, replacement);
                    i = begin + replacement.length() - 1;
                }
                begin = -1;
            }
        }
        return text;
    }
};