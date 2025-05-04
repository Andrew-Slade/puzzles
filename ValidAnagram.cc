#include <vector>
#include <string>
#include <unordered_map>

class Solution {
    public:
        bool isAnagram(std::string s, std::string t) {
            std::unordered_map<char, unsigned int> counter;
            
            if(s.length() != t.length()){ return false;}
    
            for(auto &i : s){
                    counter[i] += 1;
            }
    
            for(auto &i : t){
                if(counter.find(i) == counter.end()){
                    return false;
                }else{
                    counter[i] -= 1;
                }
            }
    
            for(auto &j : counter){
                if(j.second != 0){
                    return false;
                }
            }
            return true;  
            
        }
    };