// diameter of a tree is meant by ,max path of the tree from left  side to right side.
// the following code gives the max diameter as well as height of a binary tree.
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
int max_d=0;
int height(node *rt){
    if(rt==NULL)
    return 0;
    else{
        int lh=height(rt->left);
        int rh=height(rt->right);
        if(max_d < lh+rh+1)
        max_d=lh+rh+1;
        if(rh>lh)
        return rh+1;
        else
        return lh+1;
    }
}
int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->left=new node(6);
     root->left->left->left->left=new node(9);
     root->right=new node(3);
     root->left->right=new node(5);
     root->left->right->right=new node(8);
     root->left->right->right->right=new node(10);
     root->left->left->right=new node(7);
     int h=height(root);
     cout<<"height is equals to : "<<h<<" "<<endl;
     cout<<"max diameter is equals to :"<<max_d<<" "<<endl;
    return 0;
}