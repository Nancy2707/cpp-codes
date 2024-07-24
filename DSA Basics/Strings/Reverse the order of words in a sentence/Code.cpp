#include <sstream>  
class Solution {
public:
    string reverseWords(string s) {
        size_t start = s.find_first_not_of(' ');
        size_t end = s.find_last_not_of(' ');
        if (start == string::npos) {
            return "";
        }
        s = s.substr(start, end - start + 1);
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        reverse(words.begin(), words.end());
        string result = "";
        for (int i = 0; i < words.size(); ++i) {
            if (i > 0) {
                result += " ";
            }
            result += words[i];
        }
        
        return result;
    }
};
