#include<bits/stdc++.h>
using namespace std;
class information
{
public:
    string name;int roll;double mark;
    void input(){
        cout<<"Enter Name : ";getline(cin,name);
        cout<<"\nEnter Roll : ";cin>>roll;
        cout<<"\nEnter Marks : ";cin>>mark;
    }
    void display(){
        cout<<"\n\n\n";
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
    }
};
class student:public information
{
public:
    void operation()
    {
        cout<<"Marks : ";
        if(mark>=80.0&&mark<=100){
            cout<<"A+"<<endl;
        }
        else if(mark>=75.0){
            cout<<"A"<<endl;
        }
        else
            cout<<"Fail"<<endl;
    }
};
int main()
{
    student a;
    a.input();
    a.display();
    a.operation();

    return 0;
}
