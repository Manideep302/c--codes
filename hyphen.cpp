#include<iostream>
#include<string.h>
using namespace std;
void fun(char *s,int n){
    int c=0;
    char d[n];
    for(int i=0;i<n;i++){
        if(s[i]=='-')
        c++;
    }
    for(int i=0;i<c;i++)
    d[i]='-';
    for(int i=0;i<n;i++){
        if(s[i]=='-')
        continue;
        else{
            char k=s[i];
            d[c]=k;
            c++;
        }
    }
strcpy(s,d);
}
int main(){
    char s[4]={'h','i','r','-'};
    fun(s,4);
    for(int i=0;i<4;i++)
    cout<<s[i]<<" ";
    return 0;
}