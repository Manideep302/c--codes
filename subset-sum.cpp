// given a k ,find weather the sum of any subset in the array is equals to k
#include<iostream>
using namespace std;
bool fun(int *arr,int k,int n){
    if(k==0)
    return true;
    if(n==0)
    return false;
    if(arr[n-1]>k)
    return fun(arr,k,n-1);
    if(fun(arr,k-arr[n-1],n-1)||fun(arr,k,n-1))
    return true;
    else
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(fun(arr,k,n))
    cout<<" Yes its there ";
    else
    cout<<" No ,not there ";
    return 0;
}