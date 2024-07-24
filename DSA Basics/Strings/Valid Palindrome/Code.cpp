#include <cctype>  // for std::tolower
#include <string>
#include <vector>

class Solution {
private:
    bool valid(char ch) {
        return std::isalnum(ch); // Checks if character is alphanumeric
    }

    char toLowerCase(char ch) {
        return std::tolower(ch); // Converts character to lowercase
    }

public:
    bool isPalindrome(string s) {
        // Create a temporary string to store alphanumeric characters in lowercase
        string temp;
        for (int i = 0; i < s.size(); ++i) {
            if (valid(s[i])) {
                temp += toLowerCase(s[i]);
            }
        }

        // Check if temp is a palindrome
        int start = 0;
        int end = temp.size() - 1;
        while (start < end) {
            if (temp[start] != temp[end]) {
                return false;
            }
            ++start;
            --end;
        }
        return true;
    }
};
