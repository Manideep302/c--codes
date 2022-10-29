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
int lca(int val1,int val2,node *rt){
    if(rt == NULL)
    return 0;
    if(rt->data==val1 || rt->data==val2)
    return rt->data;
     
    int la=lca(val1,val2,rt->left);
    int ra=lca(val1,val2,rt->right);


    if(la && ra)
    return rt->data;

    return (la != 0)?la:ra;
}
int main(){
    node *root=new node(70);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(50);
	root->left->right=new node(10);
	root->left->left->left=new node(60);
	root->left->left->right=new node(40);
	root->left->left->left->left=new node(90);
	root->left->left->right->right=new node(110);
	root->left->right->right=new node(80);
	root->left->right->right->right=new node(100);
    cout<<"the lowest common ancestor is : ";
    cout<<lca(90,110,root);
    return 0;
}