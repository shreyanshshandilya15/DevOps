#check whether there is a loop in linked list 
#
  bool hasCycle(ListNode *head) {
    //place fast as well as slow variables on the position of head
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
           //if fast and slow meet in future at any time then it contains loop
            if(fast==slow)return true;
        }
        return false;
    }
