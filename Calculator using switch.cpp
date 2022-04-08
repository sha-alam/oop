#include<bits/stdc++.h>
using namespace std;
class lab
{
public:
    int x,y,n;
    char c;
    void input();
    void display();

};
void lab::input()
{
    cout<<"Enter two integer calculation: ";
    cin>>x>>c>>y;
}
void lab::display()
{
    switch(c)
    {
    case '+':
        cout<<x<<"+"<<y<<"="<<x+y<<endl;
        break;
    case '-':
        cout<<x<<"-"<<y<<"="<<x-y<<endl;
        break;
    case '*':
        cout<<x<<"*"<<y<<"="<<x*y<<endl;
        break;
    case '/':
        cout<<x<<"/"<<y<<"="<<(double)x/y<<endl;
        break;
    default:
        cout<<"404!!!Not found"<<endl;
    }
}
int main()
{
    lab p;
    p.input();
    p.display();
    return 0;
}
