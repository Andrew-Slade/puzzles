/**
 * Definition for singly-linked list.
 * 
 */
#include <vector>
#include <algorithm>
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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            vector<int> values;
            if(!list1 && !list2){
                return NULL;
            }
            while(list1 || list2){
                if(list1){
                    values.push_back(list1->val);
                    list1 = list1->next;
                }
                if(list2){
                    values.push_back(list2->val);
                    list2 = list2->next;
                }
            }
            sort(values.begin(), values.end(), greater<int>());
           
            bool first = true;
            ListNode *list3;
            for(int i: values){
                ListNode *temp;
                list3 = new ListNode(i);
                if(!first){
                    list3->next = temp;
                    first = false;
                }else{
                    first = false;
                }
               temp = list3;
            }
            return list3;
        }
    };