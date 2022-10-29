#include<iostream>
using namespace std;
int fun(int *dl,int *p,int n){
    if(dl[n-1]==0 ||n==0)
    return 0;
    
}
int main(){
    int n;
    int dl[n];
    int p[n];
    for(int i=0;i<n;i++)
    cin>>dl[i];
    for(int i=0;i<n;i++)
    cin>>p[i];
    cout<<fun(dl,p,n);
    return 0;
}