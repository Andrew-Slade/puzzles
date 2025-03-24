#include <string>
#include <vector>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string res = strs[0];
            strs.erase(strs.begin());
            for(string i: strs){
                for(int j = 0; j < res.length(); ++j){
                    if(res[j] == i[j]){
                        res[j] = i[j];
                    }else{
                        res = res.substr(0,j);
                        break;
                    }
                }
            }
            return res;
        }
    };