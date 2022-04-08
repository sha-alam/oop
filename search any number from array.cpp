/*search any number from an array*/
#include<bits/stdc++.h>
using namespace std;
class number
{
    int i,n,num,a[20],c=0;
public:
    void input();
    void display();

};
void number::input()
{
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter "<<n<<" numbers for array:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the number for search:";
    cin>>num;
}
void number::display()
{
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            cout<<"The position of this number in array is:"<<i+1<<endl;
            c++;
        }

    }
    if(c==0)
    {
        cout<<"Not found this number in array"<<endl;
    }
}
int main()
{
    number b;
    b.input();
    b.display();
    return 0;
}
