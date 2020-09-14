#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
};

node * MakingNode(int data)
{
    node *newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

node * InsertingNode(node *head,int data)
{
    if(head==nullptr)
    {
        head=MakingNode(data);
    }
    else{
        node *temp=MakingNode(data);
        temp->next=head;
        head=temp;
    }

    return head;

}

void print(node *head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null"<<endl;
}

int main()
{

    node *head=nullptr;
    head=InsertingNode(head,2);
    head=InsertingNode(head,3);
    head=InsertingNode(head,4);
    head=InsertingNode(head,5);
    head=InsertingNode(head,6);
    cout<<"LINKED LIST CREATION OUTPUT"<<endl;
    print(head);

}
