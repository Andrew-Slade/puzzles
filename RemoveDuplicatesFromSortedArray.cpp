#include <vector>
using std::vector;
//According to leetcode
//runs in O(n) time
//run in O(1) space
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            short int lastUniqueIdx = 0;
            for(short int i = 1; i < nums.size(); ++i){
                if(nums[i] != nums[lastUniqueIdx]){ //deal with non unique values
                    nums[lastUniqueIdx + 1] = nums[i];
                    lastUniqueIdx++;
                }
            }
         return lastUniqueIdx+1;
        }
    };