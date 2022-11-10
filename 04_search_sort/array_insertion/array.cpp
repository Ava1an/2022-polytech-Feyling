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