#include<iostream>
#include<queue>
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
// creating bst
node *bst(node *rt,int val){
    node *newnode=new node(val);
    if(rt==NULL)
    return newnode;
    if(val>rt->data)
    rt->right=bst(rt->right,val);
    if(val<rt->data)
    rt->left=bst(rt->left,val);
    return rt;
}int inorder_sucessor(node * rt){
    rt=rt->right;
    while(rt !=NULL && rt->left !=NULL)
       rt=rt->left;
    return rt->data;
}
node *del(node *rt,int val){
    if(rt != NULL){
    if(val > rt->data)
    rt->right=del(rt->right,val);
    else if(val < rt->data)
    rt->left=del(rt->left,val);
    else{
        if(rt->left == NULL){
            node *temp=rt->right;
            delete(rt);
            return temp;
        }
        else if(rt->right == NULL){
            node *temp=rt->left;
            delete(rt);
            return temp;
        }
        else{
            int sucessor=inorder_sucessor(rt);
            rt->data=sucessor;
            rt->right=del(rt->right,sucessor);
        }
    }

  }
}
queue<node*>q;
// level order traversal
void lvo(node *rt){
    if(rt==NULL)
    return;
    q.push(rt);
    while(q.size()!=0){
        cout<<q.front()->data<<" ";
        if(q.front()->left != NULL)
        q.push(q.front()->left);
        if(q.front()->right != NULL)
        q.push(q.front()->right);
        q.pop();
    }
}
int main(){
    node *root=new node(10);
    bst(root,8);
    bst(root,12);
    bst(root,4);
    bst(root,9);
    bst(root,11);
    cout<<"before deletion :"<<endl;
    lvo(root);
    del(root,12);
    cout<<endl<<"after deleting 12: "<<endl;
    lvo(root);
    return 0;
}