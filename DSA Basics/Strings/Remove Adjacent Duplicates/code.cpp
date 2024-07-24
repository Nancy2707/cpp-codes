#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;

        for (char c : s) {
            if (!stk.empty() && stk.top() == c) {
                stk.pop(); 
            } else {
                stk.push(c); 
            }
        }

        string result;
        while (!stk.empty()) {
            result = stk.top() + result; 
            stk.pop();
        }

        return result;
    }
};
