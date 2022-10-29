#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the size of 1st array :";
    cin>>n1;
    int arr1[n1];
    cout<<" enter the elements of 1st array "<<endl;
    for(int i=0;i<n1;i++)
    cin>>arr1[i];
    cout<<" enter the size of 2nd array :";
    cin>>n2;
    int arr2[n2];
    cout<<" enter the elements of 2nd array "<<endl;
    for(int i=0;i<n2;i++)
    cin>>arr2[i];
    unordered_set<int>s;
    for(int i=0;i<n1;i++)
    s.insert(arr1[i]);
    for(int i=0;i<n2;i++)
    s.insert(arr2[i]);
    int i=0;
    // to print the union in sorted order else directly print the set elements.
    for(auto x:s){
        if(i<s.size()){
        arr1[i]=x;
        i++;
       }
     else
        break;
    }
    sort(arr1,(arr1+i));
    cout<<"the union of two given arrays is :";
    for(int j=0;j<i;j++)
    cout<<arr1[j]<<" ";
    return 0;
}