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
int ceil(node *rt,int d){
    if(rt==NULL)
    return 0;
    if(rt->data == d)
    return d;
    int max=INT_MAX;
    while(rt != NULL){
        if(rt->data == d)
        return d;
        if(rt->data >d && rt->data <max){
            max=rt->data;
            rt=rt->left;
        }
        else if(rt->data >d)
        rt=rt->left;
        else
        rt=rt->right;
    }
    return max;
}
int main(){
    node *root=new node(10);
    bst(root,8);
    bst(root,12);
    bst(root,4);
    bst(root,9);
    bst(root,11);
    cout<<ceil(root,4);
    return 0;
}