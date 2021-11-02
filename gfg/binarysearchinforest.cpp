#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int find_height(int tree[], int n, int k)
    {
        sort(tree, tree + n);

        int low = 0;
        int heigh = tree[n - 1];
        while (low <= heigh) {
            int mid = low + ((heigh - low) / 2);

            int wood = collectWood(tree, n, mid);

            if (wood == k) {
                return mid;
            }


            if (wood > k) {
                low = mid + 1;
            } else {
                heigh = mid - 1;
            }


        }
        return -1;

    }
    int collectWood(int tree[], int n, int m) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (tree[i] > m) {
                sum += tree[i] - m;
            }
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    int n, k;
    n = 7;

    int tree[n] = { -1, -1, -1, 14, 7, 7, 9 };
    // for (int i = 0; i < n; i++)
    //     cin >> tree[i];
    k = 4;
    Solution ob;
    cout << ob.find_height(tree, n, k) << endl;

    return 1;
}

