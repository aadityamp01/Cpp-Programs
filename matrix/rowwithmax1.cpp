#include <bits/stdc++.h>
using namespace std;

/*Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input:
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).
*/

class Solution {
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
		// code here

		int ans = -1;
		int i = 0, j = m - 1;

		while (i < n && j >= 0) {
			if (arr[i][j] == 1) {
				ans = i;
				j--;
			}
			if (arr[i][j] == 0)
				i++;
		}
		return ans;
	}

};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector< vector<int> > arr(n, vector<int>(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}
		Solution ob;
		auto ans = ob.rowWithMax1s(arr, n, m);
		cout << ans << "\n";
	}
	return 0;
}