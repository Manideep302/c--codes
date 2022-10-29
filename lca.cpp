// lowest common ancestor
#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        right=left=NULL;
    }
};
bool fp(node *rt,vector<node*>&v,int val){
    if(rt==NULL)
    return false;
    v.push_back(rt);
    if(rt->data==val)
    return true;
    if(fp(rt->left,v,val) || fp(rt->right,v,val))
    return true;
    v.pop_back();
    return false;
}
int lca(int val1,int val2,node *rt){
    vector<node*>v1,v2;
    bool path1=fp(rt,v1,val1);
    bool path2=fp(rt,v2,val2);
    
    if(path1==false || path2==false)
    return 0;
    for(int i=0;i<v1.size() && i<v2.size();i++){
        if(v1[i+1] != v2[i+1])
        return v1[i]->data;
    }
    return 0;    
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
    cout<<lca(90,110,root);
    return 0;
}