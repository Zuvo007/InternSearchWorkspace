#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    string name;
    string enrollment_no;
    node * next;
};

node * MakingNode(string name,string enrollment_no)
{
    node *newnode=new node();
    newnode->enrollment_no=enrollment_no;
    newnode->name=name;
    newnode->next=NULL;
    return newnode;
}

node * InsertingNode(node *head,string name,string enrollment_no)
{

    if(head==nullptr)
    {
        head=MakingNode(name,enrollment_no);
    }
    else{
        node *temp=MakingNode(name,enrollment_no);
        temp->next=head;
        head=temp;
    }

    return head;

}

void print(node *head)
{
    while(head!=nullptr)
    {
        cout<<head->name<<":";
        cout<<head->enrollment_no<<endl;
        head=head->next;
    }

}

int main()
{

    node *head=nullptr;
    head=InsertingNode(head,"Dhrubojyoti Bhattacharya","18DMA004");
    head=InsertingNode(head,"Debatosh Bhattacharya","18DMA005");
    head=InsertingNode(head,"Mampi Debnath","18DMA006");
    head=InsertingNode(head,"Poojitha Reddy","18DMA009");
    head=InsertingNode(head,"Aman Kumar","18DSMA015");
    head=InsertingNode(head,"Rajdip Mahajan","18DSMA007");
    head=InsertingNode(head,"Subhradeep Datta","18DSMA10");
    cout<<"STROING NAME AND ENROLLMENT NUMBER USING LINKED LSIT"<<endl;
    print(head);

}
