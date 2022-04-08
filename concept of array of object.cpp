#include <iostream>
using namespace std;
class MyClass {
  int x;
public:
  void setX(int i) { x = i; }
  int getX() { return x; }
};

int main()
{
  MyClass obs[4];
  int i;

  for(i=1; i <= 4; i++)
    obs[i].setX(i);
 cout<<"obs[";
  for(i=1; i <= 4; i++)
    cout<< obs[i].getX() << " ";
 cout<<"\b]";
  return 0;
}

