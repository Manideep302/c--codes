#include<iostream>
using namespace std;
#define size 20
int stack[size],top;
void push(int stack[],int n);
void pop(int stack[]);
void peek(int stack[]);
void disp(int stack[]);
int main(){
    int k;
    top=-1;
   while(1){
       cout<<"select any option";
       cout<<endl<<"1. PUSH"<<endl<<"2. POP"<<endl<<"3. PEEK"<<endl<<"4. DISPLAY ALL THE VALUES FROM THE STACK"<<endl<<"5. EXIT"<<endl;
       int sel=0;
       cin>>sel;
       switch (sel){
           case 1:
            cout<<"enter the value to be pushed"<<endl;
            cin>>k;
            push(stack,k);
            break;
            case 2:
            pop(stack);
            break;
            case 3:
            peek(stack);
            break;
            case 4:
            disp(stack);
            break;
            case 5:
            exit(0);
            break;
            default:
            cout<<"please select a valid option";
       }
   }
    return 0;
}
void push(int stack[],int n){
    top=top+1;
    if(top<size){
        stack[top]=n;
        cout<<n<<" is pushed on to stack";
    }
    else
    cout<<" stack is full, unable to push";
    cout<<endl;
}
void pop(int stack[]){
    if(top==-1)
    cout<<" its an empty stack";
    else{
        cout<<stack[top]<<" is poped/deleted";
        top=top-1;
    }
    cout<<endl;
}
void peek(int stack[]){
    if(top==-1)
    cout<<" its an empty stack";
    else{
        cout<<stack[top]<<" thise is on the top";
    }
    cout<<endl;
}
void disp(int stack[]){
    if(top==-1)
    cout<<" its an empty stack";
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }
    cout<<endl;
}