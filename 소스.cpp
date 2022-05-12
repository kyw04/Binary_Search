#include <iostream>
#define MAX 10
using namespace std;

int binary_search(int list[], int n, int key)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (list[mid] == key)
			return mid;
		if (list[mid] > key)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}
int main()
{
	int arr[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key;
	cin >> key;

	cout << binary_search(arr, MAX, key);

	return 0;
}