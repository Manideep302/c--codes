#include<iostream>
#include<unordered_set>
using namespace std;
void fun(unordered_set<int>s1,unordered_set<int>s2){
    for(auto x:s1){
        cout<<"the intersection of arr1 and arr2 is :"<<endl;
        if(s2.find(x) != s2.end())
        cout<<x<<endl;
    }
}
int main(){
    int n;
    cout<<"enter size of 1st array ";
    cin>>n;
    int arr1[n];
    cout<<"enter the array elemets : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    int n2;
    cout<<"enter size of 2nd array ";
    cin>>n2;
    int arr2[n2];
    cout<<"enter the array elemets : "<<endl;
    for(int i=0;i<n2;i++)
    cin>>arr2[i];
    unordered_set<int> set1(arr1,arr1+n);
    unordered_set<int> set2(arr2,arr2+n2);
    fun(set1,set2);
    return 0;
}