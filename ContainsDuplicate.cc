#include <algorithm>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(auto i = 0; i < nums.size(); ++i){
            if(i > 0 && nums.at(i) == nums.at(i-1)){
                nums.clear();
                return true;
            }
        }
       return false; 
    }
};