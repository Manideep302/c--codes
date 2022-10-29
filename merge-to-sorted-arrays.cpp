#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int k=max(m,n);
    int arr[n];
    int ar[m];
    for(int i=0;i<m;i++)
    cin>>ar[i];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int j=0;
    if(n>m){
    for(int i=0;i<k;i++){
        if(arr[i]>ar[j]){
            swap(arr[i],ar[j]);
            sort(ar,ar+m);
        }

      }
    }
    else{
     for(int i=0;i<k;i++){
        if(ar[i]>arr[j]){
            swap(arr[i],ar[j]);
            sort(arr,arr+n);
        }
     }

    }
    for(auto x:arr)
    cout<<x<<" ";
    for(auto x:ar)
    cout<<x<<" ";
    return 0;
}