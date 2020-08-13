class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        
        auto curr = new ListNode();
        curr->next=head;
         auto temp=curr;
        
        while(curr!=NULL)
        {
            int sum=0;
            while(head!=NULL)
            {
                sum+=head->val;
                if(sum==0)
                    curr->next=head->next;
                head=head->next;
            }
            curr=curr->next;
            if(curr!=NULL) //taking care of corner case 
                head=curr->next;
            
        }
        return temp->next;
        
    }
};
