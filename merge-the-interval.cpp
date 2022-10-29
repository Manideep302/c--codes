#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i][0])
    }
    return 0;
}