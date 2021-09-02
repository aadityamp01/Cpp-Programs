// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

#define N 4

// Function to rotate the matrix 90 degree clockwise
void rotate90Clockwise(int a[N][N])
{

	// Traverse each cycle
	for (int i = 0; i < N / 2; i++) {
		for (int j = i; j < N - i - 1; j++) {

			// Swap elements of each cycle
			// in clockwise direction
			int temp = a[i][j];
			a[i][j] = a[N - 1 - j][i];
			a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
			a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
			a[j][N - 1 - i] = temp;
		}
	}
}

// Function for print matrix
void printMatrix(int arr[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}

// Driver code
int main()
{
	int arr[N][N] = { { 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};
	rotate90Clockwise(arr);
	printMatrix(arr);
	return 0;
}



//OR
/*
Approach: The approach is based on the pattern made by indices after rotating the matrix. Consider the following illustration
to have a clear insight into it.

Consider a 3 x 3 matrix having indices (i, j) as follows.

00 01 02
10 11 12
20 21 22

After rotating the matrix by 90 degrees in clockwise direction, indices transform into
20 10 00  current_row_index = 0, i = 2, 1, 0
21 11 01 current_row_index = 1, i = 2, 1, 0
22 12 02  current_row_index = 2, i = 2, 1, 0


Observation: In any row, for every decreasing row index i, there exists a constant column index j, such that j = current_row_index.

This pattern can be printed using 2 nested loops.
(This pattern of writing indices is achieved by writing the exact indices of the desired elements of
where they actually existed in the original array.)

#define N 4

// Function to rotate the matrix 90 degree clockwise
void rotate90Clockwise(int arr[N][N])
{
    // printing the matrix on the basis of
    // observations made on indices.
    for (int j = 0; j < N; j++)
    {
        for (int i = N - 1; i >= 0; i--)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}*/