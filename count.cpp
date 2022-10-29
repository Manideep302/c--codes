#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char fun(char a,string s){
    int l=0,e=s.length()-1,mid=-1;
    if(s.length()==1)
    return s[0];
    char temp,temp1,temp2;
    while(l<e){
        mid=(l+e)/2;
        if(s[mid]==a){
            return a;
        }
        else if(s[mid]>a){
            if(s[mid-1]<=a){
                return ((s[mid]-a)<(a-s[mid-1])?s[mid]:s[mid-1]);
            }
            else{
            temp=s[mid];
            e=mid-1;
            }
        }
        else{
            if(s[mid+1]>=a)
            return (a-s[mid])<(s[mid+1]-a)?s[mid]:s[mid+1];
            else{
                temp=s[mid];
                l=mid+1;
            }
        }
    }
    return temp;
}
int main(){
    int t;
    cin>>t;
    int k=t;
    while(t--){
    string s,f;
    // getline(cin,s);
    // getline(cin,f);
    cin>>s;
    cin>>f;
    int count =0;
    int n=f.length();
    sort(f.begin(),f.end());
    for(auto x:s){
        if((x=='a') && (f.find('a') == string::npos)){
            if(f.find('z') != string::npos){
                count+=1;
                continue;
            }
        }
        if((x=='z') && (f.find('z') == string::npos)){
            if(f.find('a') != string::npos){
                count+=1;
                continue;
            }
        }
        else{
        char a=fun(x,f);
        if(x>a)
        count+=x-a;
        else
        count+=a-x;
        }
    }
    cout<<"Case #"<<k-t<<":"<<count<<endl;
    }
    return 0;
}