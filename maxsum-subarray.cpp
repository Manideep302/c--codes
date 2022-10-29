// Kadane's Algorithm.
#include<iostream>
#include<algorithm>
using namespace std;
int fun(int arr[],int n){
    int ar[n];
    for(int i=0;i<n;i++)
    ar[i]=0;
    ar[0]=arr[0];
    for(int i=1;i<n;i++){
        int j=i-1;
            if(arr[i]+ar[j]>arr[i]){
                ar[i]=ar[j]+arr[i];
            }else
            ar[i]=arr[i];
    }
    sort(ar,ar+n);
    return (ar[n-1]);
}
int fun1(int arr[],int n){
    int max=arr[0];
    int maxsf=arr[0];
    for(int i=1;i<n;i++){
            if(maxsf+arr[i]>arr[i]){
                maxsf+=arr[i];
            }else
            maxsf=arr[i];
            if(maxsf>max)
            max=maxsf;
    }
    return (max);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
   cout<<fun(arr,n)<<" using method 1"<<endl;
   cout<<fun1(arr,n)<<" using method 2"<<endl;
    return 0;
}