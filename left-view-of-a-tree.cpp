#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
// method 1:
int mlv=0;//max level visited
void lftv(node *rt,int cl){//cl->current level
    if(rt==NULL)
    return;
    if(cl>mlv){
        mlv++;
        cout<<rt->data<<" ";
    }
    lftv(rt->left,cl+1);
    lftv(rt->right,cl+1);
}
// method 2:
void lv2(node *rt){
    queue<node*>q;
    q.push(rt);
    while(q.size()!=0){
        int n=q.size();
        for(int i=0;i<n;i++){
            if(i==0)
            cout<<q.front()->data<<" ";
            if(q.front()->left != NULL)
            q.push(q.front()->left);
            if(q.front()->right != NULL)
            q.push(q.front()->right);
            q.pop();
        }
    }
}
int main(){
    node *root=new node(20);
    root->left=new node(70);
    root->right=new node(90);
    root->left->left=new node(30);
    root->left->right=new node(40);
    root->right->right=new node(70);
    root->right->right->right=new node(120);
    root->right->right->left=new node(920);
    lv2(root);
    cout<<endl;
    lftv(root,1);
    return 0;
}