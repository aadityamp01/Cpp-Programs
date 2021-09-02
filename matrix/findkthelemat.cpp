
/*Kth element in Matrix

Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.
Example 1:

Input:
N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
Output: 27
Explanation: 27 is the 3rd smallest element.
*/



#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
        int r;
        cin >> r;
        cout << kthSmallest(mat, n, r) << endl;
    }
    // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
    return 0;
}
// } Driver Code Ends




int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    //Your code here
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pq.push(mat[i][j]);
            if (pq.size() > k) {
                pq.pop();
            }
        }
    }
    return pq.top();
}