// using classes
#include<iostream>
using namespace std;
class stack{
    int top;
    int max;
    int *a;
    public:
    stack(int m){
        top=-1;
        max=m;
        a=new int [max];
    }
    void push(int n);
    int pop();
    int peek();
    void disp();
};
void stack::push(int n){
    top=top+1;
    if(top>=max)
    cout<<"stack is full";
    else{
        a[top]=n;
        cout<<"pushed";
    }
    cout<<endl;
}
int stack::pop(){
    if(top<=-1){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else{
        int k=a[top];
        top=top-1;
        return k;
    }
    
}
int stack::peek(){
    if(top<=-1){
        cout<<"its an empty stack"<<endl;
        return 0;
    }
    else{
        return a[top];
    }
}
void stack::disp(){
    for(int i=top;i>=0;i--)
    cout<<a[i]<<" ";
    cout<<endl<<"thise are in the stack"<<endl;
}
int main(){
    stack s1(10);
    for(int i=0;i<10;i++)
    s1.push(i+15);
   int m= s1.pop();
   cout<<m<<endl;
    s1.disp();
    s1.peek();
    return 0;
}