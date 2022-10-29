#include<iostream>
using namespace std;
// METHOD 1:
int fib(int n){
    if(n<=1)
    return n;
    else{
        return (fib(n-1)+fib(n-2));
    }
}
// METHOD 2:
int lookup[100];
int feb(int n){
    if(lookup[n]==0){
        if(n<=1)
        lookup[n]=n;
        else
        lookup[n]=feb(n-1)+feb(n-2);
    }
    return lookup[n];
}
int main(){
    for(int i=0;i<100;i++)
    lookup[i]=0;
    int a;
    cin>>a;
    cout<<fib(a)<<endl;
    cout<<feb(a)<<endl;
    return 0;
}