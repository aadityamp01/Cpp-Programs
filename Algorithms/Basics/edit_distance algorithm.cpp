/*
Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of
edits (operations) required to convert ‘str1’ into ‘str2’.

    1. Insert
    2. Remove
    3. Replace

All of the above operations are of equal cost. */


// A Space efficient Dynamic Programming based C++ program to find minimum
// number operations to convert str1 to str2

#include <bits/stdc++.h>
using namespace std;

void EditDistDP(string str1, string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();

    // Create a DP array to memoize result
    // of previous computations
    int DP[2][len1 + 1];

    // To fill the DP array with 0
    memset(DP, 0, sizeof DP);

    for (int i = 0; i <= len1; i++)
        DP[0][i] = i;

    for (int i = 1; i <= len2; i++) {
        for (int j = 0; j <= len1; j++) {
            if (j == 0)
                DP[i % 2][j] = i;

            else if (str1[j - 1] == str2[i - 1]) {
                DP[i % 2][j] = DP[(i - 1) % 2][j - 1];
            }

            else {
                DP[i % 2][j] = 1 + min(DP[(i - 1) % 2][j],
                                       min(DP[i % 2][j - 1],
                                           DP[(i - 1) % 2][j - 1]));
            }
        }
    }

    cout << DP[len2 % 2][len1] << endl;
}



int main()
{
    string str1 = "food";
    string str2 = "money";
    EditDistDP(str1, str2);
    return 0;
}



// Time Complexity: O(m x n)
// Auxiliary Space: O( m )

