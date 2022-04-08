#include <bits/stdc++.h>
using namespace std;
int main()
{
    {
        string name;
        int roll;
        fstream file;
        file.open("Test.txt");
        cout<<"Enter Name : ";
        getline(cin,name);
        file<<"Name :"<<name<<endl;
        cout<<"Enter Roll: ";
        cin>>roll;
        file<<"Roll :"<<roll<<endl;
        file.close();
    }
    {
        string text;
        fstream file;
        file.open("Test.txt");
        while(getline(file,text)){
            cout <<text<<endl;
        }
        file.close();
    }

}
