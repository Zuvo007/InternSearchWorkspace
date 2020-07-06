#include<iostream>
#include<algorithm>

using namespace std;


struct Node
{
    int data;
    Node* next;
};
 Node *head;


 //inserting a node in a given position
void InsertNode(int data,int position)
{


    Node * temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(position==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }

    Node* temp2=head;
    for(int i=0;i<position-2;i++){
    temp2=temp2->next;

    }
    temp1->next=temp2->next;
    temp2->next=temp1;


}

//printing the linked list

void print()
{
    Node* temp=head;
    while(temp!=NULL)

    {
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main()
{
    head=NULL;
    InsertNode(2,1);//2
    InsertNode(3,2);//2,3
    InsertNode(4,1);//4,2,3
    InsertNode(1,2);//4,1,2,3

    print();
}
