// Problem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int const N = 10;
int main()
{

	int x;
	cout << "x = ";
	cin >> x;
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		cout << "a" << i + 1 << " = ";
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == x)
		{
			arr[i] = -1;

			for (int j = i; j < N - 1; j++)
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
			i--;
		}
	}

	cout << endl;

	for (int i = 0; i < N; i++)
	{
		cout << "a" << i + 1 << " = " << arr[i] << endl;
	}
	return 0;
}


