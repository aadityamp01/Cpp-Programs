//Difference Array | Range update query in O(1)


#include <bits/stdc++.h>
using namespace std;

// Creates a diff array D[] for A[] and returns
// it after filling initial values.
vector<int> initializeDiffArray(vector<int>& A)
{
	int n = A.size();

	vector<int> D(n + 1);

	D[0] = A[0], D[n] = 0;
	for (int i = 1; i < n; i++)
		D[i] = A[i] - A[i - 1];
	return D;
}

// Does range update
void update(vector<int>& D, int l, int r, int x)
{
	D[l] += x;
	D[r + 1] -= x;
}

// Prints updated Array
int printArray(vector<int>& A, vector<int>& D)
{
	for (int i = 0; i < A.size(); i++) {
		if (i == 0)
			A[i] = D[i];

		else
			A[i] = D[i] + A[i - 1];

		cout << A[i] << " ";
	}
	cout << endl;
}

// Driver Code
int main()
{
	// Array to be updated
	vector<int> A{ 10, 5, 20, 40 };

	// Create and fill difference Array
	vector<int> D = initializeDiffArray(A);

	update(D, 0, 1, 10);
	printArray(A, D);

	update(D, 1, 3, 20);
	update(D, 2, 2, 30);
	printArray(A, D);

	return 0;
}








/*
Examples : 
 

Input : A [] { 10, 5, 20, 40 }
        update(0, 1, 10)
        printArray()
        update(1, 3, 20)
        update(2, 2, 30)
        printArray()
Output : 20 15 20 40
         20 35 70 60
Explanation : The query update(0, 1, 10) 
adds 10 to A[0] and A[1]. After update,
A[] becomes {20, 15, 20, 40}       
Query update(1, 3, 20) adds 20 to A[1],
A[2] and A[3]. After update, A[] becomes
{20, 35, 40, 60}.
Query update(2, 2, 30) adds 30 to A[2]. 
After update, A[] becomes {20, 35, 70, 60}.
*/