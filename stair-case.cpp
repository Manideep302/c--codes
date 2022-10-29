#include<iostream>
using namespace std;
int fun(int arr[],int n){
    if(n<=1){
        return 1;
    }
    if(arr[n]>0)
    return arr[n];
    arr[n]=fun(arr,n-1)+fun(arr,n-2);//I can only take either 1step or 2step.
    return arr[n];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=0;
    arr[0]=1;
    if(n<=0)
    cout<<0<<endl;
    else
    cout<<fun(arr,n);
    return 0;
}