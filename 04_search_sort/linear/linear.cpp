#include <iostream>
#include <cassert>

using namespace std;

int z = 0;

int search(int* arr, int n, int x, int* result)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			cout << "Search complete" << endl;
			result[z] = i;
			z += 1;
			break;
		}

	}
	return z;
}

int main()
{
	int arr[] = { 1,7,8,9 };
	int n = 4;
	int x = 7;
	int result[1000];
	search(arr, n, x, result);

	cout << z;
	return 0;
}