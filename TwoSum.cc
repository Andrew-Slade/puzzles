/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
*/
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> idx;
            vector<pair<int, int>> order;
            for (int i = 0; i < nums.size(); i++) {
                order.push_back({i, nums[i]});
            }
            sort(order.begin(), order.end(),
                 [](auto a, auto b) { return a.second < b.second; });
            int sum = 0;
            int mindx = 0;
            int maxdx = order.size() - 1;
            for (int i = 0; i < order.size(); i++){
                int sum = order.at(mindx).second + order.at(maxdx).second;
                if( sum > target){
                    maxdx--;
                }else if(sum < target){
                    mindx++;
                }if(sum == target){
                    idx = {order.at(mindx).first, order.at(maxdx).first};
                    return idx;
                }
            }
         return idx;
        }
    };