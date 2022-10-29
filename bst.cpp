#include<iostream>
#include<queue>
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
// Method 1:my approach
node* bst(node *rt,int d){
    if(rt != NULL){
        if(rt->left==NULL && rt->data>d){
            node *newnode=new node(d);
            rt->left=newnode;
        }
        if(rt->left != NULL && rt->data>d)
        bst(rt->left,d);
        if(rt->right == NULL && rt->data<d){
            node *newnode=new node(d);
            rt->right=newnode;
        }
        if(rt->right != NULL && rt->data<d)
        bst(rt->right,d);
    }
    return rt;
}
// Menthod 2:PPI
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
// Method 3:PPI
node* bst2(node *rt,int val){
    node *nn=new node(val);
    if(rt==NULL)
    return nn;
    if(val > rt->data)
    rt->right=bst2(rt->right,val);
    if(val < rt->data)
    rt->left=bst2(rt->left,val);
    return rt;
}
queue<node*> q;
// level order traversal
void lvo(node *rt){
    if(rt==NULL)
    return;
    q.push(rt);
    while(q.size()>0){
        cout<<q.front()->data<<" ";
        if(q.front()->left != NULL)
        q.push(q.front()->left);
        if(q.front()->right != NULL)
        q.push(q.front()->right);
        q.pop();
    }
}
int main(){
    node *root=new node(10);
    bst(root,8);
    bst(root,12);
    bst(root,4);
    bst(root,9);
    bst(root,11);
    lvo(root);
    return 0;
}