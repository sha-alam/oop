#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],len;
    cout<<"Enter Size of Array: ";
    cin>>len;
    cout<<"\nEnter the Array : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    sort(arr,arr+len);
    cout << "\nArray after sorting:"<<endl;
    for (int i=len-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}

