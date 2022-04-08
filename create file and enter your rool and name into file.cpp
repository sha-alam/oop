#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int roll;
    fstream file;
    file.open("test.txt");
    cout<<"Enter Name :";
    getline(cin,name);
    file<<name<<endl;
    cout<<"Enter Roll: ";
    cin>>roll;
    file<<roll<<endl;
    file.close();
}
