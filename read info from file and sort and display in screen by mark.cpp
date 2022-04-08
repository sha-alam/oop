#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class A
{
public:
    int roll[10],marks[10];
    string name[10];
    int temp,t;
    string p;
    void input();
    void display();

};
void A::input()
{

    ifstream file("test.txt");

    for(int i=0; i<5; i++)
    {

        file>>name[i];
        file>>roll[i];
        file>>marks[i];
    }
    for(int i=0; i<5; i++)
    {
        for(int j=i; j<5-1; j++)
        {
            if(marks[i]>marks[j+1])
            {
                temp=marks[i];
                marks[i]=marks[j+1];
                marks[j+1]=temp;
                t=roll[i];
                roll[i]=roll[j+1];
                roll[j+1]=t;
                p=name[i];
                name[i]=name[j+1];
                name[j+1]=p;
            }
        }
    }

}
void A::display()
{    cout<<"    Name"<<"     "<<"Roll"<<"  "<<"Marks"<<endl;
     cout<<"........................"<<endl;
     for(int i=0; i<5; i++)
    {
        cout<<"|"<<setw(8)<<name[i]<<"|  "<<roll[i]<<"|  "<<marks[i]<<"|"<<endl;
    }
    cout<<"........................"<<endl;
}
int main()
{
    A b;
    b.input();
    b.display();
    return 0;
}

