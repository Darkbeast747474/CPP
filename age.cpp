#include <iostream>
using namespace std;
int main(){
int a;
cout<<"enter the age";
try
{
if(a<18)
{
throw a;
}
cout<<"successful";}
catch(int x)
{
cout<<"under age restriction";
}

return 0;
}
