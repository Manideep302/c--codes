// tree implementation in cpp and postorder,preorder,inorder implementation;
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
void postord(node *rt){
    if(rt!=NULL){
        postord(rt->left);
        postord(rt->right);
        cout<<rt->data<<" ";
    }
}
void preord(node *rt){
    if(rt!=NULL){
        cout<<rt->data<<" ";
        preord(rt->left);
        preord(rt->right);
    }
}
void inord(node *rt){
    if(rt!=NULL){
        inord(rt->left);
        cout<<rt->data<<" ";
        inord(rt->right);
    }
}
int main(){
    node *root=new node(4);
    root->left=new node(35);
    root->right=new node(45);
     root->left->left=new node(5);
    root->right->right=new node(36);
     root->left->right=new node(46);
    root->right->left=new node(6);
     root->left->left->left=new node(37);
    root->right->right->right=new node(47);
     root->left->left->right=new node(7);
    root->right->right->left=new node(38);
    cout<<endl<<"postorder"<<endl;
    postord(root);
    cout<<endl<<"preord"<<endl;
    preord(root);
    cout<<endl<<"inord"<<endl;
    inord(root);
    return 0;
}