#include<iostream>
#include<queue>
#include<stack>
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
void spt(node *rt){
    queue<node*>q;
    stack<node*>s;
    q.push(rt);
    bool f=true;
    while(q.size()!=0){
        int n=q.size();
        for(int i=0;i<n;i++){            
            if(f==true)
            cout<<q.front()->data<<" ";
            else
            s.push(q.front());
            if(q.front()->left != NULL)
            q.push(q.front()->left);
            if(q.front()->right != NULL)
            q.push(q.front()->right);
            q.pop();
        }
             while((!s.empty() )&& f==false){
                 cout<<s.top()->data<<" ";
                 s.pop();
             }
         f=!f;
    }
}
int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    spt(root);
    return 0;
}