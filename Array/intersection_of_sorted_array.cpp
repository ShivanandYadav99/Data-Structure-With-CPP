//  find intersection of
// two sorted arrays

#include <iostream>
using namespace std;

/* m= number of elements of arr1[]
n =number of elements of arr2[] */

void print_Inter_section(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else                                     // if arr1[i] == arr2[j] 
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
	}
}


/* Driver program to test above function */

int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	// Function calling
	print_Inter_section(arr1, arr2, m, n);

	return 0;
}
