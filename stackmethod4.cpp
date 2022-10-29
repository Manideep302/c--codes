#include<iostream>
using namespace std;
struct stack{
    int top;
    int max;
    int *a;
    stack(int n){
        top=-1;
        max=n;
        a=new int[n];
    }
   void push(int n){
        top=top+1;
        if(top>=(max-1))
        cout<<"the stack is fulled";
        else{
        a[top]=n;
        cout<<"pushed bro";
        }
        cout<<endl;
    }
    void pop(){
        if(top<=-1)
        cout<<"bro the stack is empty"<<endl;
        else{
        cout<<a[top]<<" is pushed out"<<endl;
        top=top-1;
        }
    }
    void disp(){
        if(top<=-1)
        cout<<"the stack is empty bro"<<endl;
        else{
            for(int i=top;i>=0;i--)
            cout<<a[i]<<" ";
            cout<<"thise are in the stack"<<endl;
        }
    }
    bool isfull(){
        if(top>=max)
        return true;
        else
        return false;
    }
    bool isempty(){
        if(top<=-1)
        return true;
        else
        return false;
    }
};
int main(){
    stack s1(52);
    for(int i=0;i<52;i++)
    s1.push(i+152);
    cout<<endl;
    s1.disp();
    cout<<endl;
    for(int i=0;i<5;i++)
    s1.pop();
    cout<<endl;
    s1.disp();
    return 0;
}