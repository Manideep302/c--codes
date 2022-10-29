#include<iostream>//to print float and integer seperately.ex:if input is 22.34 then op will be 22 and 34
using namespace std;
int main(){
    int c=0;
    float i;
    cin>>i;
    int k=(int)i;
    int t=k;
    float m=(i-k);
    while((i-k) > 0){
        i=i*10;
        k=(int)i;
        c++;
    }
    for(int i=0;i<c;i++)
    m=m*10;
    cout<<"Integer: "<<t<<" Float: "<<m<<endl;
    return 0;
}