// Algorithm
// Quickselect is a selection algorithm to find the k-th smallest element in an unordered list.
// It is related to the quick sort sorting algorithm.


#include <iostream>
#include <limits>
using namespace std;

// Standard partition process of QuickSort().
// It considers the last element as pivot
// and moves all smaller element to left of
// it and greater elements to right
int partition(int arr[], int l, int r)
{
	int x = arr[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= x) {
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

// This function returns k'th smallest
// element in arr[l..r] using QuickSort
// based method. ASSUMPTION: ALL ELEMENTS
// IN ARR[] ARE DISTINCT
int kthSmallest(int arr[], int l, int r, int k)
{
	// If k is smaller than number of
	// elements in array
	if (k > 0 && k <= r - l + 1) {

		// Partition the array around last
		// element and get position of pivot
		// element in sorted array
		int index = partition(arr, l, r);

		// If position is same as k
		if (index - l == k - 1)
			return arr[index];

		// If position is more, recur
		// for left subarray
		if (index - l > k - 1)
			return kthSmallest(arr, l, index - 1, k);

		// Else recur for right subarray
		return kthSmallest(arr, index + 1, r,
		                   k - index + l - 1);
	}

	// If k is more than number of
	// elements in array
	return INT_MAX;
}

int main()
{
	int arr[] = { 10, 4, 5, 8, 6, 11, 26 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	cout << "K-th smallest element is "
	     << kthSmallest(arr, 0, n - 1, k);
	return 0;
}


/*
Time Complexity
Best -	O(n)
Worst -	O(n2)
Average -	O(n*log n)

Important Points:

Like quicksort, it is fast in practice, but has poor worst-case performance. It is used in
The partition process is same as QuickSort, only recursive code differs.
There exists an algorithm that finds k-th smallest element in O(n) in worst case, but QuickSelect performs better on average.

*/

