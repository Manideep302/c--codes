#include<iostream>
#include<string>
using namespace std;
int main(){
    system("cls");
    cout<<" enter the number: ";
    cin>>num;
    string val[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    if(num>10000){
        cout<<"enter the number below 10000"<<endl;
    }
    if(num>1000){
        int temp=num/1000;
        cout<<val[temp]<<" thousand ";
        num-=temp*1000;
    }
    if(num>100){
        int temp=num/100;
        cout<<val[temp]<<" hundrerd ";
        num-=temp*100;
    }
    if(num>20){
        int temp=num/10;
        cout<<val[18+temp]<<" ";
        num-=temp*10;
    }
    cout<<val[num];
    return 0;
}