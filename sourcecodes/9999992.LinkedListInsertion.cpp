#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;
};
Node *head;

//function for Inserting a node
//from the beginning
void InsertBegin(int val)
{

    //getting a new node
    //pushing the data to the
    //node's data part
    //linking the next node
    //with the just inserted node
    //head is pointing to the
    //newly inserted note
    //which is at the beginning
    Node *temp=new Node();
    temp->data=val;
    temp->next=head;
    head=temp;

}
void print(Node *head)
{

        if(head==NULL){
            cout<<"The list is :";
                return;}
            print(head->next);
            cout<<head->data<<" ";
}

int main()
{

    int i,n,x;
    cout<<"enter how many numbers you want to add :";
    cin>>n;
    for(int  i=0;i<n;i++){

        cin>>x;
        InsertBegin(x);
        print(head);
    }

}




