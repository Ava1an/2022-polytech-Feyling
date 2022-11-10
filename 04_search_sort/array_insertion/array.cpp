#include <iostream>

using namespace std;

int insert(int* arr, int n, int x, int p)
{
	int y;
	for (int i = p; i < n; i++)
	{
		y = arr[i];
		arr[i] = x;
		x = y;
	}
	arr[n] = x;
	return 0;
}


int search_position(int* arr, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > x)
		{
			return i;
		}
	}
	return n;
}


int insert_sorted(int* arr, int n, int x)
{
	insert(arr, n, x, search_position(arr, n, x));
}