// using vectors
#include<iostream>
#include<vector>
using namespace std;
struct stack
{
    vector<int>v1;
    void push(int n){
        v1.push_back(n);
        cout<<"pushed"<<endl;
    }
    void pop(){
        if(v1.empty())
        cout<<"its emty bro"<<endl;
        else{
        v1.pop_back();
        cout<<"poped"<<endl;
        }
    }
    void peek(){
        if(v1.empty())
        cout<<"its emty bro"<<endl;
        else{
            int k=v1.back();
            cout<<k<<" is at the top"<<endl;
        }
    }
    void disp(){
        vector<int>::iterator i;
         if(v1.empty())
        cout<<"its emty bro"<<endl;
        else{
        for(i=v1.end();i>=v1.begin();i--)
        cout<<*i<<" ";
        cout<<endl<<"ths are in stack"<<endl;
    }
    }

};

int main(){
    stack s1;
    for(int i=0;i<10;i++)
    s1.push(i);
    for(int i=0;i<5;i++)
    s1.pop();
    s1.disp();
    return 0;
}