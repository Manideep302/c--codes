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
int flt(node *rt,int d){
    if(rt==NULL)
    return 0;
    if(rt->data == d)
    return d;
    int min=0;
    while(rt !=NULL ){
        if(rt->data == d)
        return d;
        if(d > rt->data){
            min=rt->data;
            rt=rt->right;
        }
        else{
            rt=rt->left;
        }
    }
    return min;
}
int main(){
    node *root=new node(10);
    bst(root,8);
    bst(root,12);
    bst(root,4);
    bst(root,9);
    bst(root,11);
    bst(root,13);
    cout<<flt(root,5);
    return 0;
}