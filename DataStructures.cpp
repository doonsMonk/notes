// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Linear search fucntion , complexity worst O(N) and best O(1)
int linearsearch(const int(&a)[10], const int value)
{
	int i = 0;
	int size = sizeof(a) / sizeof(int);
	while (size > i) // traverse in the whole array
	{
		// if value is at the current index return the index
		if (value == a[i]) return i;
		++i; //else increment index
	}
	return -1; // if the value is not found return -1
}

// A recursive binary search function.It returns
// location of x in given array arr[l..r] is present,  
// otherwise -1 , complexity worst O(log N) and best O(1)
int binarySearchRec(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = (l + r) / 2;

		// If the element is present at the middle  
		// itself 
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then  
		// it can only be present in left subarray 
		if (arr[mid] > x)
			return binarySearchRec(arr, l, mid - 1, x);

		// Else the element can only be present 
		// in right subarray 
		return binarySearchRec(arr, mid + 1, r, x);
	}

	// We reach here when element is not  
	// present in array 
	return -1;
}

// A recursive binary search function.It returns
// location of x in given array arr[l..r] is present,  
// otherwise -1 , complexity worst O(log N) and best O(1)
int binarySearchItre(int arr[], int l, int r, int x)
{
	while (r >= l)
	{
		int mid = (l+r) / 2;

		// If the element is present at the middle  
		// itself 
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
		{
			// If element is smaller than mid, then  
			// it can only be present in left subarray 
			r = mid - 1;
		}
		else
		{
			// Else the element can only be present 
			// in right subarray
			l = mid + 1;
		}
	}

	// We reach here when element is not  
	// present in array 
	return -1;
}

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//linear search
	cout << linearsearch(a, 7) << endl;
	cout << linearsearch(a, -1) << endl;
	cout << linearsearch(a, 10) << endl;
	cout << linearsearch(a, 11) << endl;
	cout << linearsearch(a, 1) << endl<<endl;
	//binay search rec
	cout << binarySearchRec(a, 0, 9, 7) << endl;
	cout << binarySearchRec(a, 0, 9, -1) << endl;
	cout << binarySearchRec(a, 0, 9, 10) << endl;
	cout << binarySearchRec(a, 0, 9, 11) << endl;
	cout << binarySearchRec(a, 0, 9, 1) << endl<<endl;
	//binay search ite
	cout << binarySearchItre(a, 0, 9, 7) << endl;
	cout << binarySearchItre(a, 0, 9, -1) << endl;
	cout << binarySearchItre(a, 0, 9, 10) << endl;
	cout << binarySearchItre(a, 0, 9, 11) << endl;
	cout << binarySearchItre(a, 0, 9, 1) << endl << endl;

	getchar();
	return 0;
}
