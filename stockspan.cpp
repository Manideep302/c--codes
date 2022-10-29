// count the every element itself
#include<iostream> //optimised approach,order is o(n)//in the actual approach o(n^2)//actual approach is using 2 for loops.*/ 
#include<stack>
using namespace std;
int main(){
    stack<int>s1;
    int c=0;
    int arr[]={1,2,55,122,8,10,12,07,8,5};
    s1.push(0);
    cout<<arr[0]<<" span is "<<1<<endl;
    for(int i=1;i<10;i++){
        while(!s1.empty() && arr[s1.top()]<=arr[i]){
            s1.pop();
        }
        c=s1.empty()?i+1:i-s1.top();
        s1.push(i);
         cout<<arr[i]<<" span is "<<c<<endl;
    }
    return 0;
}