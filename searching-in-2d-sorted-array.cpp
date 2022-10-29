#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int k;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    cin>>k;
    int f=0;
    for(int i=0;i<m;i++){
        if(arr[i][0]<=k && arr[i][n-1]>=k){
            f=1;
            int l=0,r=n-1;
            while(l<r){
                int mid=(l+r)/2;
                if(arr[i][mid]==k){
                    cout<<"true";
                    break;
                }
                if(arr[i][mid]>k)
                r=mid-1;
                else
                l=mid+1;
            }
        }
        if(f==1)
        break;
    }
    if(f==0)
    cout<<"false";
    return 0;
}