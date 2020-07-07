#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* head;


//Inserting a node from the beginning 
void insert (int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct node *temp=head;
	cout<<"List is: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


//deleting a node at nth position
void Delete(int n)
{
	struct node *temp1=head;
	if(n==1)
	{
		head=temp1->next;
		free(temp1);
		return ;
	}
	for(int i=0;i<n-2;i++)
	{
		temp1=temp1->next;
	}
	struct node *temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
}

int main()
{
	head=NULL;
	cout<<"how many number"<<endl;
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the number"<<endl;
        cin>>x;
		insert(x);
		print();
	}
	int d;
	cout<<"Enter the position of the node want to be deleted"<<endl;
	cin>>d;
	Delete(d);
	print();

	return 0;
}
