#include<iostream>
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
void stss(node *rt){
    stack<node*>s1;
    stack<node*>s2;
    s1.push(rt);
    while((!s1.empty()) || (!s2.empty())){
        while(!s1.empty()){
            cout<<s1.top()->data<<" ";
                if(s1.top()->left != NULL)
                s2.push(s1.top()->left);
                if(s1.top()->right != NULL)
                s2.push(s1.top()->right);
                s1.pop();
        }
        while(!s2.empty()){
            cout<<s2.top()->data<<" ";
               if(s2.top()->right != NULL)
                s1.push(s2.top()->right);
                if(s2.top()->left != NULL)
                s1.push(s2.top()->left);
                s2.pop();
        }
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
    stss(root);
    return 0;
}