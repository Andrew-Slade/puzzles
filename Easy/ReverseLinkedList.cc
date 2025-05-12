#include <utility>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* p = nullptr;
            ListNode* t = head;
            if(head != nullptr){
                while(head != nullptr){
                    t = t->next;
                    head->next = p;
                    p = head;
                    head = t;
                }
            }   
            return p;
        }
};