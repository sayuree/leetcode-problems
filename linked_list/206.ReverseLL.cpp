//My solution 
// O(n) time and O(n) space
//Iterating through LL to push values of LL into a vector
//Then changing the values of a LL in a reverse manner
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     if(head==NULL){
         return NULL;
     }
    ListNode* current=head; 
    vector<int> temp;
    while(current){
        temp.push_back(current->val);
        current=current->next;
    }
        current=head;
        for(int i=temp.size()-1;i>=0;--i){
            current->val=temp[i];
            current=current->next;
        }
        current=head;
        return current;
    }
};