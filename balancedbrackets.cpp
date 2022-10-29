// brootforce anukuntaa
#include<iostream>
#include<stack>
using namespace std;
int cmp(char a,char b){
    if((a=='[' && b== ']') ||(a=='(' && b== ')') || (a=='{' && b=='}'))
    return 1;
    else
    return 0;
}
int main(){
    stack<char>s1;
    string ip;
    cin>>ip;
    int res=0;
    int n=ip.size();
    for(int i=0;i<n;i++){
        if((ip[i]=='[') || (ip[i]=='(') || (ip[i]=='{')){
        s1.push(ip[i]);
        }
        else{
            if(s1.empty()){
            cout<<"NO"<<endl;
            break;
            }
            else{
                res= cmp(s1.top(),ip[i]);
               if(res==0){
                   cout<<"NO"<<endl;
                   break;
               }
               else{
                 s1.pop();
                 if(i == (n-1))
                 cout<<"yes"<<endl;
                  else
                  continue;
               }

            }
        }
    }
    return 0;
}