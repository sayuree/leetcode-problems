//My Solution 
// O(n) time and O(1) space
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* current=head;
        int length=0;
        while(current){
            length++;
            current=current->next;
        }
        int middle=length/2;
        current=head;
        int tracker=0;
        ListNode* result;
        while(tracker<=middle){
            if(tracker==middle){
                result=current;
                return result;
            }
          
            ++tracker;
            current=current->next;
        }

     
    return NULL;
    }
};