#include <string>
#include <vector>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string res;
            int idx = 0;
            bool pastFirst = false;
            for(auto i: strs){
                for(int j = 0; j < max(i.length(), res.length()); ++j){
                    if(!pastFirst){
                        res = i;
                        break;
                    }else{
                        if(res[j] == i[j]){
                            res[j] = i[j];
                        }else{
                            res = res.substr(0,j);
                            break;
                        }
                    }
                }
                pastFirst = true;
            }
            

            return res;
        }
    };