
#include <queue>
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
            TreeNode* b = root;
            TreeNode* t;
            queue<TreeNode*> q;
            while(true){
                if(b == nullptr){
                    break;
                }
                if( b->left != nullptr){
                    q.push(b->left);
                }
                if(b->right != nullptr){
                    q.push(b->right);
                }
                t = b->right;
                b->right = b->left;
                b->left = t;
                if(q.size() > 0){
                    b = q.front();
                }else{
                    break;
                }
                q.pop();
            }
            return root;
        }
};