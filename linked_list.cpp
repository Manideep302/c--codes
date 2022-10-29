//head will always points to the first element in the node 
// reffer prepbytes not prepinsta.
// insert at first means the header changes every time,the old node's next should point
// to the newly created node ,it follows LIFO type.
// insert at last means FIFO means ,every time when a newnode is created its next will be
// zero(NULL).header will be fixed at 1st node always.travel from the header to the lastly
// created node through a temporarily created header like pointer and copy the header to that temp created pointer,ie there will be null in the next of the lastly created node.
// when u found the lastly created node ,replace the next in the lastly created node with 
// the address of newly created node.
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *header=0;
void insert(int d){//insert at beginning
    node *newnode=new node;
    newnode->data=d;
    newnode->next=header;
    header=newnode;
}
void insertLast(int data) {//insert at last
    node * newNode = new node;
    newNode -> data = data;
    newNode -> next = NULL;
    //need this if there is no node present in linked list at all
    if ( header == NULL) {
        header = newNode;
        return;
    }
    node * temp = header;
    while (temp -> next != NULL)
        temp = temp -> next;
    temp -> next = newNode;
}
void insertatpos(int pos,int data){
    node * newnode = new node;
    newnode = header;
    int size = 0;
    while (newnode != NULL) {
        newnode = newnode -> next;
        size++;
    }
    newnode->data=data;
    newnode->next=NULL;
    if(pos<1 || size < pos)
    cout<<"unable to insert "<<endl;
    else{
        node *temp =header;
        while(--pos){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void display(){
    node *temp=header;
    while(temp->next !=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main(){
    insertLast(55);
    insertLast(56);
    insertLast(57);
    insertLast(58);
    insertLast(59);
    insertLast(60);
    display();
    return 0;
}