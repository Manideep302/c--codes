// find the repeating and missing no in the given array
#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_set<int>s;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(s.count(arr[i])){
            cout<<"A= "<<arr[i];
        }
        else
        s.insert(arr[i]);
        if(!(s.count(i+1))){
            cout<<" B= "<<i+1;
        }
    }
    return 0;
}