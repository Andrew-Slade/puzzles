#include <queue>
#include <algorithm>
#include <vector>
using std::vector;
using std::sort;
using std::priority_queue;
using std::greater;

class KthLargest {
public:
    KthLargest(int k, vector<int>& n) {
        this->j = k-1;
        sort(n.begin(), n.end(), greater<int>());
        if(n.size() > 0){for(auto i = 0; i < std::min(k, static_cast<int>(n.size())); ++i){this->p.push(n.at(i));}}
        n.clear();
    }  
    int add(int val) {
        if(this->p.size() < this->j+1){
            this->p.push(val);
            if(this->p.size() > this->j){return this->p.top();}
        }else{
            if(val >= this->p.top()){this->p.push(val);}
            if(this->p.size() > this->j+1){for(auto i = this->j; i < this->p.size(); ++i){this->p.pop();}}
            return this->p.top();
        }   
        return NULL;
    }
    priority_queue<int, vector<int>, greater<int>> p;
    int j;
};