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
// method 1:
int s=0;
int calsize(node *root){
    if(root==NULL)
    return 0;
    else{
        int j=calsize(root->left);
        int k=calsize(root->right);
        int s=j+k+1;
        return s;
    }
}
// method 2:
queue<node*> q;
int cs(node *rt){
    int size=0;
    if(rt==NULL)
    return 0;
    q.push(rt);
    while(q.size()>0){
        size++;
        if(q.front()->left != NULL)
        q.push(q.front()->left);
        if(q.front()->right != NULL)
        q.push(q.front()->right);
        q.pop();
    }
    return size;
}
int main(){
    node *root=new node(1);
    root->left=new node(10);
    root->right=new node(100);
    root->left->left=new node(1000);
    root->left->right=new node(10000);
    int l=calsize(root);
    cout<<l<<endl;
    int k= cs(root);
    cout<<k<<endl;
    return 0;
}