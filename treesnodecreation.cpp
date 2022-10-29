// CREATING A NODE, C APPROACH
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node*right;
};
node* createnode(int data){
    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return(newnode);
}
int main(){
    node *root=createnode(2);
    root->left=createnode(3);
    root->right=createnode(5);
    root->left->left=createnode(10);
    root->left->right=createnode(15);
    return 0;
}