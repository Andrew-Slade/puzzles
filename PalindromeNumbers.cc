#include <string>
#include <algorithm>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            string s = to_string(x);
            if(s.size() < 2){
                return true;
            }
            string t = to_string(x);
            reverse(t.begin(), t.end());
            return s == t;
        }
    };