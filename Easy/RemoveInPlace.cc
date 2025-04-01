#include <vector>
using namespace std;
class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int prev = 0;
            for(int i = 0; i < nums.size(); ++i){
                if(nums[i] != val){
                    nums[prev] = nums[i];
                    ++prev;
                }
            }
            return prev;
        }
    };