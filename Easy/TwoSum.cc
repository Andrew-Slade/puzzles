/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
*/
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int s = nums.size();
            for(int i = 0; i < s; ++i){
                nums[i] = target - nums[i];
                int t = nums[i];
                for(int j = s - 1; j > i; --j){
                    if(nums[j] == t){
                        nums.clear();
                        nums.push_back(j);
                        nums.push_back(i);
                        return nums;
                    }
                }
             }
            return nums;
        }
    };