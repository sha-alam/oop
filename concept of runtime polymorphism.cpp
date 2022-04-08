#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"A"<<endl;
    }
};
class B:public A
{
public:
    void display()
    {
        cout<<"B"<<endl;
    }
};
int main()
{
    B a;
    a.display();
    return 0;
}


