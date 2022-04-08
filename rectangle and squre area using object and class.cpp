#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    double a,b;
    void area()
    {
        cout<<"Rectangle area is : "<<a*b<<endl;
    }
};
class squre
{
public:
    double a;
    void area()
    {
        cout<<"Square area is : "<<a*a<<endl;
    }
};

int main()
{
    rectangle rtg;
    squre sqr;
    cout<<"Enter Rectangle length and Width  : ";
    cin>>rtg.a>>rtg.b;
    cout<<"Ënter Squre length : ";
    cin>>sqr.a;
    rtg.area();
    sqr.area();

}
