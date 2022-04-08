#include<iostream>
using namespace std;
class A
{
   public:
       int n,i,sum,j,roll[10];
       float marks[100],total[10],av;
       string name[10];
       void input();
       void display();
};
void A::input()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>name[i];
        cin>>roll[i];
        sum=0;
        for(j=0;j<3;j++)
        {
            cin>>marks[j];
            sum=sum+marks[j];
        }
        total[i]=sum;
        av[i]=total[i]/3;

    }
}
void A::display()
{
    for(i=0;i<n;i++)
    {
        cout<<name[i]<<" "<<roll[i]<<" "<<total[i]<<" "<<endl;;
    }
}
int main()
{
    A b;
    b.input();
    b.display();
    return 0;
}

