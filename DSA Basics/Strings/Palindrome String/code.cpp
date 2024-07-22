#include <bits/stdc++.h> 
#include <cctype> 

bool isAlphanumeric(char c) {
    return std::isalnum(static_cast<unsigned char>(c)) != 0;
}
bool checkPalindrome(string s)
{
        int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        while (left < right && !isAlphanumeric(s[left])) {
            ++left;
        }
         while (left < right && !isAlphanumeric(s[right])) {
            --right;
        }
        if (std::tolower(s[left]) != std::tolower(s[right])) {
            return false;
        }
        ++left;
        --right;
    }
    
    return true;
}
