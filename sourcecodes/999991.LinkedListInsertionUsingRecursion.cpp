#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void InsertionAtHead(node* &head,int d)
{
    cin>>d;
    if(d==-1) return;
    if(head==NULL){
        head=new node(d);
        cin>>d;
    }
    node* n=new node(d);
    n->next=head;
    head=n;
    InsertionAtHead(head,d);
}

void Print(node* head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node* head=NULL;
    int d;
    InsertionAtHead(head,d);
    Print(head);
    return 0;

}
