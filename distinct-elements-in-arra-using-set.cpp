#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> set;
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //method 1:
    for(int i=0;i<n;i++)
    set.insert(arr[i]);
    cout<<set.size()<<" are the distinct elements in the array "<<endl;
    //method 2:
    unordered_set<int> set1(arr,arr+n);
    cout<<set1.size()<<"are the distinct elements of the given array ";
    return 0;
}