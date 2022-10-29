// Given an array of integers nums[] and an integer target, return indices of the two numbers such that their sum is equal to the target.
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    unordered_map<int,int>m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    m[arr[i]]=i;
    int a,b;
    sort(arr,arr+n);
        int l=0,r=n-1;
        while(l<r){
            if(arr[l]+arr[r]==k){
            a=arr[l];b=arr[r];
            break;
            }
            else if(arr[l]+arr[r]>k)
            r--;
            else
            l++;
        }
        for(auto x:m){
            if(x.first==a || x.first==b)
            cout<<x.second<<" ";
        }
    return 0;
}