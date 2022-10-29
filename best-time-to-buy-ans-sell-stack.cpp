// best time to buy and sell stack
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int min=INT_MAX;
    int max=0;
    for(auto x:arr){
        if(x<min)
        min=x;
        if((x-min)>max)
        max=x-min;
    }
    cout<<max;
    return 0;
}
