#include<iostream>
using namespace std;
int main(){
  int c=100;
  int* a=&c;
  int** b;
  b=&a;
  cout<<&c<<" : &c"<<endl;
  cout<<*a<<" : *a"<<endl;
  cout<<a<<" : a"<<endl;
  cout<<&a<<" : &a"<<endl;
  cout<<b<<" : b"<<endl;
  cout<<*b<<" : b*"<<endl;
  cout<<**b<<" : b**"<<endl;
  int f=2;
  int u=5;
  cout<<(7^2^3);
  return 0;
}