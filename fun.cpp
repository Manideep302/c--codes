#include<iostream>
using namespace std;
void fun(int *a){
    int k= a[2];
    a[2]=a[0];
    a[0]=k;
}
int main(){
    int a[]={5,4,3,8};
    int c;
    fun(a);
    // cout<<"a = "<<a<<"b = "<<b;
    for(int i=0;i<4;i++)
    cout<<" "<<a[i];
    return 0;
}