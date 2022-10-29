// find the first unique element in a given string with the time complexity of o(n)
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>freq(26,0);
    int n=s.size();
    for(int i=0;i<n;i++){
        freq[s[i]-'a']=freq[s[i]-'a']+1;// freq[0]=>a the encountered letter is a when the
                                 //a is encountered the value at freq[0] will be incremented,freq[1]=>b,freq[2]=>c,,,,,,..freq[25]=>z.
    }
    int flag=0;
    for(int i=0;i<n;i++){
        // traverse around the string once again ,by comparing weather its freq is 1
        if(freq[s[i]-'a'] == 1){
        cout<<i;
        flag=1;
        break;
        }
    }
    if(flag==0)
    cout<<"-1";
    return 0;
}