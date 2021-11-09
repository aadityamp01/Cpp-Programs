// The Boyer-Moore voting algorithm is one of the popular optimal algorithms which is used to
//find the majority element among the given elements that have more than N/ 2 occurrences.
//This works perfectly fine for finding the majority element which takes 2 traversals over the given elements,
//which works in O(N) time complexity and O(1) space complexity.


/*
Steps to implement the algorithm :
Step 1 – Find a candidate with the majority –

Initialize a variable say i ,votes = 0, candidate =-1
Traverse through the array using for loop
If votes = 0, choose the candidate = arr[i] , make votes=1.
else if the current element is the same as the candidate increment votes
else decrement votes.

Step 2 – Check if the candidate has more than N/2 votes –

Initialize a variable count =0 and increment count if it is the same as the candidate.
If the count is >N/2, return the candidate.
else return -1.*/


#include <iostream>
using namespace std;

int findMajority(int arr[], int n)
{
	int i, candidate = -1, votes = 0;
	// Finding majority candidate
	for (i = 0; i < n; i++) {
		if (votes == 0) {
			candidate = arr[i];
			votes = 1;
		}
		else {
			if (arr[i] == candidate)
				votes++;
			else
				votes--;
		}
	}
	int count = 0;

	for (i = 0; i < n; i++) {
		if (arr[i] == candidate)
			count++;
	}

	if (count > n / 2)
		return candidate;
	return -1;
}
int main()
{
	int arr[] = { 1, 1, 1, 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int majority = findMajority(arr, n);
	cout << " The majority element is : " << majority;
	return 0;
}



// Time Complexity: O(n) ( For two passes over the array )
// Space Complexity: O(1)


