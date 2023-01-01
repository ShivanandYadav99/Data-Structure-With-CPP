/* find first
repeating element in arr[] */
#include <bits/stdc++.h>
using namespace std;
void printFirstRepeating(int arr[], int n)
{
	int k = 0;
	int max = n;
	for (int i = 0; i < n; i++)
		if (max < arr[i])
			max = arr[i];
	int a[max + 1] = {};
	int b[max + 1] = {};

	for (int i = 0; i < n; i++) {

		if (a[arr[i]]) {
			b[arr[i]] = 1;
			k = 1;
			continue;
		}
		else
			a[arr[i]] = i + 1;
	}

	if (k == 0)
		cout << "No repeating element found" << endl;
	else {
		int min = max + 1;

		for (int i = 0; i < max + 1; i++)
			if (a[i] && min > a[i] && b[i])
				min = a[i];
		cout << arr[min - 1];
	}
	cout << endl;
}


int main()
{
	int arr[] = { 10, 5, 3, 4, 3, 5, 6 };

	int N = sizeof(arr) / sizeof(arr[0]);
	printFirstRepeating(arr, N);
}
