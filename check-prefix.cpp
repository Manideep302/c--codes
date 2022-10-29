// check if the given string is preasent in the another given string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    for(int i=0;i<n-m+1;i++){
        for(int j=0,k=i;j<m;j++,k++){
            if(s1[k]!=s2[j])
            break;
            if(j==m-1)
            cout<<"matches"<<endl;
        }
    }
    // prefi checkng
    for(int i=0,j=0;i<n-m+1 && j<m;i++,j++){
        if(s1[i]!=s2[j]){
            break;
        }
        if(j==m-1){
            cout<<"prefix is preasent";
        }
    }
    return 0;
}