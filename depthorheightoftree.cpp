#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
int depth(node *rt){
    if(rt==NULL)
    return -1;//return -1;if the height starts from 0
    else{
        int lh=depth(rt->left);
        int rh=depth(rt->right);
        if(lh>rh)
        return lh+1;
        if(rh>=lh)
        return rh+1;
    }
}
int main(){
    node *root=new node(5);
    root->left=new node(15);
    root->right=new node(25);
    root->left->left=new node(35);
    cout<<"height of the tree is:"<<depth(root)<<endl;
    return 0;
}