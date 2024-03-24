#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> Num{1, 2, 3, 4, 5};
	int arr[] = {1, 2, 3, 4, 5};

	// Ranged Loop
	for (int &i : Num)
	{
		cout << i << "  "; // Vector
	}
	cout << "" << endl;

	for (int &i : arr)
	{
		cout << i << "  "; // Array
	}
	cout << "" << endl;
	// Push_Back Function of a Vector Class To Insert Element At Last of A Vector

	Num.push_back(6);
	Num.push_back(7);

	for (int &i : Num)
	{
		cout << i << "  ";
	}
	cout << "" << endl;

	// Accessing the Particular Element OF A Vector using "At" Function or Simple Like Accessing an
	// Array Using It's index Value

	cout << "Element at Index 0: " << Num.at(0) << endl;
	cout << "Element at Index 2: " << Num[2] << endl;

	// Same if updating an element of a Vector We Can Use At Function Or Simply Assign to The Given Index

	Num[0] = 2;
	Num.at(2) = 1;

	cout << "Element at Index 0 After Updating: " << Num.at(0) << endl;
	cout << "Element at Index 2 After Updating : " << Num[2] << endl;

	for (const int &i : Num)
	{
		cout << i << "  ";
	}
	cout << "" << endl;
	// Pop_Back Function of a Vector Class To Delete Element From the Last of A Vector

	Num.pop_back();

	for (const int &i : Num)
	{
		cout << i << "  ";
	}
	cout << "" << endl;

	// Num.clear(); //Clears The Vector

	if (Num.empty())
	{
		cout << "Sorry" << endl;
	}
	else
	{
		cout << "Welcome" << endl;
	}

	// declare iterator
	vector<int>::iterator iter;

	// initialize the iterator with the first element
	iter = Num.begin();

	// print the vector element
	cout << "num[0] = " << *iter << endl;

	return 0;
}