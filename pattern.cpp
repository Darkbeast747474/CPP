#include <iostream>
using namespace std;
void H_rec(int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
void Rightangled_pyramid(int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j <= n - i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}

void Num_Pyramid(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

void IncrementNum_Pyramid(int n)
{
	int count = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << count <<" ";
			count++;
		}
		cout << endl;
	}
}

int main()
{
	int row, col, n;
	// cout << "Enter The Row & Column" << endl;
	// cin >> row >> col;
	// H_rec(row, col);
	// cout << "Enter The Number Of Rows for Pyramid" << endl;
	// cin >> n;
	// Rightangled_pyramid(n);
	cout << "Enter The Number Of Rows for Pyramid" << endl;
	cin >> n;
	cout << endl;
	IncrementNum_Pyramid(n);
	return 0;
}