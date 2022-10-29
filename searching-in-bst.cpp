#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
// creation of bst
node* bst1(node *rt,int d){
    node *newnode = new node(d);
    node *parent=NULL;
    node *temp=rt;
    while(temp != NULL){
        parent=temp;
        if(temp->data < d)
        temp=temp->right;
        else
        temp=temp->left;
    }
    if(parent== NULL)
    parent=newnode;
    if(d>parent->data)
    parent->right=newnode;
    else
    parent->left=newnode;
    return rt;
}
// searching
bool sbt(node *rt,int val){
    if(rt==NULL)
    return false;
    if(rt->data == val)
    return true;
    if(sbt(rt->left,val) || sbt(rt->right,val))
    return true;
    else
    return false;
}
int main(){
    node *root=new node(15);
    bst1(root,10);
    bst1(root,120);
    bst1(root,8);
    bst1(root,100);
    bst1(root,150);
    bst1(root,15);
    bst1(root,20);
    if(sbt(root,110))
    cout<<"its there";
    else
    cout<<"its not there";
    return 0;
}