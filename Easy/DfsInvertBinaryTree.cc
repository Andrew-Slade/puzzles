#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* d = root;
        TreeNode* t;
        stack<TreeNode*> s;
        while(true){
            if(d == nullptr){
                break;
            }
            cout << d->val << endl;
            if(d->right != nullptr){
                s.push(d->right);
            }
            if( d->left != nullptr){
                s.push(d->left);
            }
            t = d->right;
            d->right = d->left;
            d->left = t;
            if(s.size() > 0){
                d = s.top();
            }else{
                break;
            }
            s.pop();
        }
        return root;
    }
};