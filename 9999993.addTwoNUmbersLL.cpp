class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        int sum=l1->val+l2->val;
        ListNode * resNode=new ListNode(sum%10);
            
        resNode->next=addTwoNumbers(l1->next,l2->next);
        
        if(sum>=10)
            resNode->next=addTwoNumbers(resNode->next,new ListNode(1));
        return resNode;
            
        
    }
};
