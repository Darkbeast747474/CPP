#include <iostream>
using namespace std;
void B_S(int item, int A[], int n)
{
	int m = 0 + n / 2;
	for (int i = 0; i < n; i++)
	{
		if (A[m] == item)
		{
			cout << "Item Present at Index: " << m << endl;
			break;
		}
		else if (item > A[m])
		{
			m = m + 1;
		}
		else
		{
			m = m - 1;
		}
	}
}

// Function for Selection sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of
	// unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in
		// unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		// Swap the found minimum element
		// with the first element
		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}

void Bubble_Sort(int a[], int n)
{
	int i, j, temp;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1],
        // that are greater than key,
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i] << "\t";
}



// Driver program
int main()
{
	int n;
	cout<<"Enter The No. of Element : "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter The Item In the Array: "<<endl;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	// Function Call
	insertionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

