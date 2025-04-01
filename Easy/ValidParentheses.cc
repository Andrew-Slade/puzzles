#include <string>
#include <stack>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack <char> c;
            for(int i = 0; i < s.length(); ++i){
                switch(s[i]){
                    case '(':
                        c.push(s[i]); break;
                    case '[':
                        c.push(s[i]); break;
                    case '{':
                        c.push(s[i]); break;
                    case ')':
                        if(!c.empty() && c.top() == '('){c.pop(); break;}else{return false;}
                    case ']':
                         if(!c.empty() && c.top() == '['){c.pop(); break;}else{return false;}
                    case '}':
                        if(!c.empty() && c.top() == '{'){c.pop(); break;}else{return false;}
                    default:
                        return false;
                }
            }
            return c.empty();
        }
    };