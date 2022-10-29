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
node *bst(node *rt,int d){
    node *nd=new node(d);
    if(rt==NULL)
    rt=nd;
    if(d > rt->data)
    rt->right=bst(rt->right,d);
    if(d < rt->data)
    rt->left=bst(rt->left,d);
    return rt;
}
void kse(node *rt,int &k){
    if(rt != NULL){
        kse(rt->left,k);
        // kse(rt->right,k);
        k--;
        if(k==0){
            cout<<(rt->data);
        }
        else{
            kse(rt->right,k);
            // kse(rt->left,k);
        }
    }
}

int main(){ 
    node *root=new node(10);
    bst(root,8);
    bst(root,12);
    bst(root,4);
    bst(root,9);
    bst(root,11);
    int a=2;
    kse(root,a);
    return 0;
}