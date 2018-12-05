// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int linearsearch(const int (&a)[10],const int value)
{
	int i = 0;
	int size = sizeof(a) / sizeof(int);
	while (size > i)
	{
		if (value == a[i]) return i;
		++i;
	}
	return -1;
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << linearsearch(a,7) << endl;
	cout << linearsearch(a,-1) << endl;
	cout << linearsearch(a,10) << endl;
	cout << linearsearch(a,11) << endl;
	cout << linearsearch(a,1) << endl;
	getchar();
	return 0;
}
