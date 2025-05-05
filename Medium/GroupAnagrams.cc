#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> result;
            unordered_map<string, vector<string>> res;
            string tmp;
            if(strs.size() < 2){
                if(strs.size() == 0){
                    return result;
                }
                for(auto &u : strs){
                    res[u].push_back(u);
                }
            }
            for(size_t i = 0; i < strs.size(); ++i){
                tmp = strs[i];
                sort(tmp.begin(), tmp.end());
                if(i == 0){ //needs to be here for weird cases like "", ""
                    vector<string> s = {strs[i]};
                    res[tmp] = s;
                }else{
                    res[tmp].push_back(strs[i]);
                }
            }
            for(auto &i : res){
                //my original one did not include move semantics,
                //this was copied for my personal notes
                result.push_back(move(i.second));
            }
            return result;
        }
    };