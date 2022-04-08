#include<bits/stdc++.h>
using namespace std;
class number
{
public:
    int x,y;
    void display(int a,int b){
        x=a;
        y=b;
    }
};
class num:public number
{
public:
    void display(int x,int y){
        cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    }
};
int main()
{
    num p;
    int b,d;
    cout<<"Enter two integer number : ";
    cin>>b>>d;
    p.display(b,d);

    return 0;
}
