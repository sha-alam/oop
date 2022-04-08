#include<bits/stdc++.h>
using namespace std;
class calculation
{
public:
    double area,volume;
    void display(double x,double y){
        area=x*y;
        cout<<"area : "<<area<<endl;
    }
    void display(double a,double b,double c)
    {
        volume = a*b*c;
        cout<<"Volume : "<<volume<<endl;
    }
};
int main()
{
    calculation room;
    room.display(50,7);
    room.display(50,7,15);

    return 0;
}
