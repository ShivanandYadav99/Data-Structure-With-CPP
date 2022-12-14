// find the missing integer  ex--> {1,2,3,5,6,7,8}==output=4 and enter continue number

#include <iostream>
using namespace std;


int getMissingNo(int a[], int n)
{
	int i, result= 1;

	for (i = 2; i <= (n + 1); i++) {
		result += i;
		result -= a[i - 2];
	}
	return result;
}


int main()
{
	int arr[] = { 1, 2, 3,4, 5 ,6,7,9};
	int n = sizeof(arr) / sizeof(arr[0]);

	
	cout << getMissingNo(arr, n);
	return 0;
}


