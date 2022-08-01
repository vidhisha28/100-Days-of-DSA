 ListNode* reverseList(ListNode* head) {
        
        //Recursive approach(faster) :
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* rest = reverseList(head->next);
        head->next->next=head;
        
        head->next=NULL;
        return rest;
        //3-pointer method : 
      /*  ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        head=prev;
        return head;*/
        
        
    }
};