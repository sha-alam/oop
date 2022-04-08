#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],len;
    cout<<"Enter Size of Array"<<endl;
    cin>>len;
    cout<<"Enter the Array"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+len);
    cout << "\nArray after sorting:"<<endl;
    for (int i=0;i<len;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
