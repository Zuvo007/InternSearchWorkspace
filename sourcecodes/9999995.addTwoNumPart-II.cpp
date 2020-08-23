class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        while(l1)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        ListNode* head=NULL;
        int carry=0;
        while(!s1.empty() and !s2.empty())
        {
            int sum=s1.top()+s2.top()+carry;
            s1.pop();
            s2.pop();
            carry=sum/10;
            if(head==NULL)
            {
                head=new ListNode(sum%10);
            }
            else
            {
                ListNode* temp=new ListNode(sum%10);
                temp->next=head;
                head=temp;
            }
        }
        while(!s1.empty())
        {
            int sum=s1.top()+carry;
            carry=sum/10;
            ListNode* temp=new ListNode(sum%10);
            s1.pop();
            temp->next=head;
            head=temp;
        }
        while(!s2.empty())
        {
            int sum=s2.top()+carry;
            carry=sum/10;
            ListNode* temp=new ListNode(sum%10);
            s2.pop();
            temp->next=head;
            head=temp;
        }
        if(carry)
        {
            ListNode* temp= new ListNode(carry);
            temp->next=head;
            head=temp;
        }
        return head;
    }
};
