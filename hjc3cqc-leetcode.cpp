#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> symbols;
        for (int i=0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                symbols.push(s[i]);
            }
            else {
                if (symbols.empty()) {
                    return false;
                }
                else if (s[i] == ')') {
                    if (symbols.top() != '(') return false;
                    else symbols.pop();
                }
                else if (s[i] == ']') {
                    if (symbols.top() != '[') return false;
                    else symbols.pop();
                }
                else if (s[i] == '}') {
                    if (symbols.top() != '{') return false;
                    else symbols.pop();
                }
            }
        }
    return symbols.empty();
    }
};
