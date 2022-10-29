// creation of a binary tree using classes
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
int main(){
    node root(30);
    root.left=new node(50);
    root.right=new node(80);
    return 0;
}