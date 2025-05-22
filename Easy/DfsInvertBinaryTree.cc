#include <vector>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* bfs = root;
        TreeNode* tmp;
        vector<TreeNode*> stack;
        while(true){
            if(bfs == nullptr){
                break;
            }
            if(bfs->right != nullptr){
                stack.push_back(bfs->right);
            }
            if( bfs->left != nullptr){
                stack.push_back(bfs->left);
            }
            tmp = bfs->right;
            bfs->right = bfs->left;
            bfs->left = tmp;
            if(stack.size() > 0){
                bfs = stack.back();
            }else{
                break;
            }
            stack.pop_back();
        }
        stack.clear();
        return root;
    }
};