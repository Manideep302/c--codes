#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack <char> s;
    string a;
    cin>>a;
    int n=a.size();
    for(int i=0;i<n;i++){
        int b=(int)a[i];
        if(b>=48){
            cout<<a[i];
            continue;
        }
        if(b==41){
            while(s.top()!='('){
               char k=s.top();
               cout<<k;
               s.pop();
            }
        }
    }
    return 0;
}