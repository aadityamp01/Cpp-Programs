// Algorithm
// Counting sort is a sorting technique which is based on the range of input value. It is used to sort elements in linear time. In Counting sort,
//we maintain an auxiliary array which drastically increases space requirement for the algorithm implementation


// Steps:-

// Iterate the input array and find the maximum value present in it.
// Declare a new array of size max+1 with value 0
// Count each and every element in the array and increment its value at the corresponding index in the auxiliary array created
// Find cumulative sum is the auxiliary array we adding curr and prev frequency
// Now the cumulative value actually signifies the actual location of the element in the sorted input array
// Start iterating auxiliary array from 0 to max
// Put 0 at the corresponding index and reduce the count by 1, which will signify the second position of the element if it exists in the input array
// Now transfer array received in the above step in the actual input array


#include <iostream>
using namespace std;


void countSort(int arr[], int n) {

	int arr1[10];
	int count_arr[10];
	int x = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > x)
			x = arr[i];
	}

	for (int i = 0; i <= x; ++i) {
		count_arr[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		count_arr[arr[i]]++;
	}

	for (int i = 1; i <= x; i++) {
		count_arr[i] += count_arr[i - 1];
	}


	for (int i = n - 1; i >= 0; i--) {
		arr1[count_arr[arr[i]] - 1] = arr[i];
		count_arr[arr[i]]--;
	}

	for (int i = 0; i < n; i++) {
		arr[i] = arr1[i];
	}
}

void display(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[] = {4, 2, 2, 8, 3, 3, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	countSort(arr, n);
	display(arr, n);
}




// Time Coplexity
// Best Time Complexity : O(n+k)
// Average Time Complexity : O(n+k)
// Worst Time Complexity : O(n+k)

// Space Complexity:
// Auxiliary space is required in Counting sort implementation as we have to create a count array of size max+1
// Hence space complexity is: O(max)
