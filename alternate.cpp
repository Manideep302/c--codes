#include<iostream>
using namespace std;
void fun(int *a,int n){
    for(int i=0;i<n;i++){
        if((a[i]<0) && (i%2 != 0)){
            for(int j=i+1;j<n;j++){
                if((a[j]>0) && (j%2 == 0)){
                    int temp =a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
        if((a[i]>0) && (i%2 == 0)){
            for(int j=i+1;j<n;j++){
                if((a[j]<0) && (j%2 != 0)){
                    int temp =a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
    }

}
int main(){
    int a[5]={5,-3,2,-752,55};
    fun(a,5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    return 0;
}