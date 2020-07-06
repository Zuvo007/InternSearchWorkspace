bool has_cycle(SinglyLinkedListNode* head) {

            auto fast=head->next;
            auto slow=head;
            while(fast!=NULL && fast->next!=NULL)
            {
                if(fast==slow) return true;
                fast=fast->next->next;
                slow=slow->next;
            }
            return false;

}
