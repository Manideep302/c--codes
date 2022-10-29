#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int d){
        data =d;
        left=right=NULL;
    }
};
// method 1: mine
int m=0;
int maxm(node *rt){
   if(rt!=NULL){
        if(rt->data >=m)
        m=rt->data;
        maxm(rt->left);
        maxm(rt->right);
    }
    return m; 
}
// method 2:PI
int calcMAX(node *node){
    
    if(node == NULL)
        return INT_MIN;
    else
        return max(node->data, max(calcMAX(node->left), calcMAX(node->right)));
}
int main(){
    node *root=new node(1);
    root->left=new node(10);
    root->right=new node(100);
    root->left->left=new node(1000);
    root->left->right=new node(10000);
    cout<<endl<<maxm(root)<<endl;
    cout<<calcMAX(root);
    return 0;
}