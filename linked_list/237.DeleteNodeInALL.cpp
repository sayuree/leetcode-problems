//My Solution
//O(n) time and O(1) space
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* front=node; 
        ListNode* follow=node->next;
        while(follow){
             if(follow->next==NULL){
                front->next=NULL;
            }
            front->val=follow->val;
            front=front->next;
            follow=follow->next;
        }
        return;
    }
};