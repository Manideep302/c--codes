// using stl(standard template library)
// available functions
// 1.stack.push()
// 2.stack.pop()
// 3.stack.top()
// 4.stack.size()
// 5.stack.empty()
#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack <int>s;
   for(int i=97;i<123;i++)
   s.push(i);
   cout<<endl<<"thise is at the top "<<s.top()<<endl;
   cout<<"thise is the size of the array "<<s.size()<<endl;
   return 0;
}