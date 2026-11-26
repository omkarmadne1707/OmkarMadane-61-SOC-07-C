#include<iostream>
using namespace std;

class Calculator
{
public:
int add (int x,int y)
  {
     return x+y;
  }

int add (int a,int b,int c)
  {
     return a+b;
   }
};

int main()
{
Calculator cal;
cout<<"The addition is:"<<cal.add(2,3)<<endl;
cout<<"The addition is:"<<cal.add(3,6);

return 0;
}
