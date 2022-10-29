#include<iostream>
using namespace std;
int main(){
    int A=10;
    int B=20;
    int a=A;
    int b=B;
    int e=A^B;
    cout<<e<<" ";
    e=11^13;
    cout<<e<<" ";
    int max=0;
    while(a<=B-1){
        int j=a+1;
        while(j<=B){
            int t=a^j;
            if(t>max){
            max=t;
            cout<<a<<" "<<j<<" "<<max<<endl;
            }
             j++;
        }
        a++;
    }
    cout<<max;
    return 0;
}