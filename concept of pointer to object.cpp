#include<iostream>
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
    A *b;
    B a;
    b=&a;
    b->display();
    return 0;
}

