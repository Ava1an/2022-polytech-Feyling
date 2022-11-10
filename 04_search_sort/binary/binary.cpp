#include <iostream>

using namespace std;

int search(int* arr, int n, int x)
{

	int min = 0;
	int max = n - 1;
	int mid;
	while (min <= max)
	{
		mid = (min + max) / 2;

		if (x == arr[mid])
		{
			cout << mid;
			return mid;
		}
		else if (x < arr[mid])
		{
			max = mid - 1;
		}
		else
		{
			min = mid + 1;
		}
	}
	return 0;
}

int main()
{
	int arr[] = { 1,7,8,9 };
	int n = 4;
	int x = 7;
	search(arr, n, x);
	return 0;
}