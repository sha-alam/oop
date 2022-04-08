/*Bubble sort in decending order*/
#include<bits/stdc++.h>
using namespace std;
class number
{
    int n,i,j,temp,a[20];
public:
    void input();
    void operation();
    void output();
};
void number::input()
{
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter "<<n<<" numbers for array:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
}
void number::operation()
{
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(a[i]<a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
        }
    }
}
void number::output()
{
    cout<<"Desending Order:";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
}
int main()
{
    number m;
    m.input();
    m.operation();
    m.output();
    return 0;
}

