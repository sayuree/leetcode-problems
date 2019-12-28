// O(n) solution
// Two Pointer Technique: fast incrementing to two, slow incrementing to one at a time 
// If there is a cycle then at some time fast will reach out slow one
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode *fast=head->next;
        ListNode *slow=head;
        while(fast!=slow){
            if(fast==NULL||fast->next==NULL){
                return false;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return true;
    }
};