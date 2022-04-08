/*Insert number in array*/
#include<bits/stdc++.h>
using namespace std;
class ice
{
    int i,j,n,num,temp,a[20];
public:
    void input();
    void display();
};
void ice::input()
{
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter "<<n<<" numbers for array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void ice::display()
{
    cout<<"Enter the insert number:";
    cin>>num;
    cout<<"Enter the position ,you want insert the number:";
    cin>>j;
   for (i=n-1;i>=j-1;i--)
      a[i+1] = a[i];

   a[j-1]=num;
    cout<<"After insert:"<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    ice m;
    m.input();
    m.display();
    return 0;
}
