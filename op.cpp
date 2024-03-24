// C++ Program to Demonstrate the working
// of conversion operator
#include <iostream>
using namespace std;
class Fraction {
private:
	int num, den;

public:
	Fraction(int n, int d)
	{
		num = n;
		den = d;
	}

	// Conversion operator: return float value of fraction
	operator float() const
	{
		return float(num) / float(den);
	}
};

int main()
{
	int n,d;
	cout<<"Enter The Num & Den:"<<endl;
	cin>>n>>d;
	Fraction f(n,d);
	float dk=f;
	cout << f << '\n';
	return 0;
}
