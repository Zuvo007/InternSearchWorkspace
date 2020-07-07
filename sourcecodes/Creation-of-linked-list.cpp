#include<iostream>
#include<algorithm>

using namespace std;


struct Node* Insert(int data);


struct Node
{
    int data;
    Node* next;
};
 Node *head; //global head;


 //defination of the Insert function
 //it takes a value
 //create a new node
 //assign the value to the node
 //link that with the head
 //lastly head point to the first element
 //return the newly created node
 //Insert element from the beginning


Node* Insert(int data)
{
    auto New_node=new Node();
    New_node->data=data;
    New_node->next=NULL;
    New_node->next=head;
    head=New_node;
    return head;
    }




int main()
{
    Node* res;
    head=NULL;
    int n,k;
    cout<<"Enter the size of the linked list :";
    cin>>n;
    for(int i=0;i<n;i++){
            cout<<"enter the element "<<i+1<<" in the list :";
        cin>>k;
        cout<<"the list is :";
         res= Insert(k); //calling the function

         //condition for terminating the loop
    while(res!=NULL)
    {

        cout<<res->data<<" ";
        res=res->next;
    }
    cout<<endl;
}

}

