#include <vector>
using namespace std;

//suboptimal, but a great exercise in learning sliding window
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            auto max = 0;
            auto right = 1;
            auto left = 0;
            auto eval = 0;
            while(right != prices.size()){
                eval = prices.at(right) - prices.at(left);
                if(eval > 0){
                    ++right;
                    if(eval > max){
                        max = eval;
                    }
                }else{
                    ++left;
                    right = left + 1;
                }
            }
            return max;
        }
    };
    