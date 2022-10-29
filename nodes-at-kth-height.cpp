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
void kth(node *rt,int k){
    if(rt==NULL)
    return;
    if(k==0){
    cout<<rt->data<<" ";
    return;
    }
    kth(rt->left,k-1);
    kth(rt->right,k-1);
}
int main(){
    node *root=new node(5);
    root->left=new node(15);
    root->right=new node(35);
    root->left->left=new node(450);
    root->left->left->left=new node(55);
    root->left->right=new node(950);
    root->right->right=new node(195);
    root->right->left=new node(1095);
    cout<<"at k: "<<endl;
    kth(root,2);
    return 0;
}