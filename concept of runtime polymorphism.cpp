#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print ()
    { cout<< "print base class" <<endl; }
};

class derived:public base
{
public:
    void print ()
    { cout<< "print derived class" <<endl; }
};
int main()
{
    base *p;
    derived d;
    p = &d;
    p->print();
    return 0;
}
