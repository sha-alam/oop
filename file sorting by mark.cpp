#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int roll, mark;
};
bool comp(student a,student b){
    return a.mark < b.mark;
}
int main()
{
    student s[10];
    string name;
    int roll, mark,entry;
    ifstream stu;
    stu.open("student.txt");
    int i = 0;
    while(stu>>s[i].name>>s[i].roll>>s[i].mark){
        i++;
    }
    entry = i;
    sort(s, s + entry, comp);

    for (int i = 0; i < entry;i++){
        cout << "Name: " << s[i].name << "\tRoll: " << s[i].roll << "\tMark: " << s[i].mark << endl;
    }
}
