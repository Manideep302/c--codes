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
queue<node*> q;
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
     node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    lvo(root);
    return 0;
}