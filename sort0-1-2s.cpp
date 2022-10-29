#include <iostream>
using namespace std;
void sort012(int arr[], int n)
{
    int l = 0, mid = 0, r = n - 1;
    while (mid <= r)
    {
        if (arr[mid] == 0)
        {
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        }
        else if(arr[mid]==1)
        mid++;
        else{
            swap(arr[mid],arr[r]);
            r--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
    sort012(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}