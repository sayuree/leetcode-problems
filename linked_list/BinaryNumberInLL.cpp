/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //O(n) solution just couting the length and computing the powers of 2 correspondingly
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* current=head;
        int count=0;
        while(current){
            count++;
            current=current->next;
        }
        current=head; 
        int decimal_val=0;
        while(current){
            decimal_val+=current->val*pow(2,count-1);
            count--;
            current=current->next;
        }
        return decimal_val;
    }
};