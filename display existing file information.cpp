#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    fstream file;
    file.open("test.txt");
    while(getline(file,text)){
        cout <<text<<endl;
    }
    file.close();
}
