#include <iostream>
#define f(x) (x * x * x - x - 1)
#define EP 0.0001
using namespace std;

double err(double x, double x_a)
{
	int ch;
	cout << "Enter 1 for Absolute Error & 0 for Relative: " << endl;
	cin >> ch;
	if (ch == 1)
	{
		return x - x_a;
	}
	else if (ch == 0)
	{
		return (x - x_a) / x_a;
	}
}
void Bis_Method(double a, double b)
{
	double c, fc, fa = f(a), fb = f(b);
	if (fa * fb >= 0)
	{
		cout << "Values Are Not Valid!" << endl;
		return;
	}
    c = a;
	while (b - a >= EP)
	{

		c =(a + b) / 2;
		fc = f(c);

		if (fc == 0)
		{
			break;
		}
		else if (fc * fa < 0)
		{
			b = c;
		}
		else
			a = c;
	}
	cout << "The Value of Root is : " << c;
}
int main()
{
	double x, x_a, a, b;
	// cout<<"Enter The Exact Value: "<<endl;
	// cin>>x;
	// cout<<"Enter The Approx Value :"<<endl;
	// cin>>x_a;
	// cout<<"The Resultant Error Between"<<x<<" & "<<x_a<<" : "<<(err(x,x_a))<<endl;
	cout << "Enter the First Value For Function" << endl;
	cin >> a;
	cout << "Enter the Second Value For Function" << endl;
	cin >> b;
	Bis_Method(a, b);
	return 0;
}
