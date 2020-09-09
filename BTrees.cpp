#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *right;
    node *left;
};

node *getNewNode(int data)
{
    node  *newnode =new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}


node *insertNode(node* root,int data)
{
    if(root==NULL)
    {
        root=getNewNode(data);
    }

    else if(data<=root->data)
    {
        root->left=insertNode(root->left,data);
    }
    else
    {
        root->right=insertNode(root->right,data);
    }
    return root;
}

bool SearchNode(node *root,int data)
{
    if(root==NULL)
        return false;
    if(root->data==data)
        return true;
    if(data<=root->data) return SearchNode(root->left,data);
    else return SearchNode(root->right,data);

}

void preorderTraversal(node *root)
{
    if (root==nullptr)
        return;
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void Levelorder(node *root)
{
    if(root==NULL)
        return;
    queue<node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        node *current=Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL)
            Q.push(current->left);
        if(current->right!=NULL)
            Q.push(current->right);
        Q.pop();
    }
}



int main()
{

    node *root=NULL;
    root=insertNode(root,10);
    root=insertNode(root,1);
    root=insertNode(root,20);
    root=insertNode(root,4);
    root=insertNode(root,3);
    root=insertNode(root,21);
    root=insertNode(root,9);
    root=insertNode(root,23);
    root=insertNode(root,14);
    int num;
    cout<<"enter a number :";
    cin>>num;
    if(SearchNode(root,num)==true)
        cout<<"match found"<<endl;
    else
        cout<<"match not found"<<endl;
    Levelorder(root);
    cout<<endl;
    preorderTraversal(root);

}
