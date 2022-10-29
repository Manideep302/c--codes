// find the element that is occuring more than n/2 times.
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>m;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    m[arr[i]]++;
    }
    int k=n/2;
    for(auto x:m){
        if(x.second>k)
        cout<<x.first<<" has repeated more than "<<n/2<<" times";
    }
    return 0;
}