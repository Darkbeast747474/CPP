#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter The Value of A&B:-";
  cin>>a>>b;
  try
  {
    if(b==0)
    {
      throw b;
    }
    cout<<"A/B:-"<<a/b;
  }
catch(int x)
{
  cout<<"Division By Zero Error";
}
return 0;
}