#include <bits/stdc++.h>
using namespace std;


class solution{
    public:
        void subString(string S, int N)
        {
            for (int i = 0; i < N; i++)
                for (int len = 1; len <= N - i; len++)
                    S.substr(i, len);
        }
        
        
        int dp[1001][1001]; // 2D matrix
        bool isPal(string s, int i, int j)
        {
            // Base condition
            if (i > j)
                return 1;
         
            if (dp[i][j] != -1)
                return dp[i][j];
         
            
            if (s[i] != s[j])
                return dp[i][j] = 0;
         
            return dp[i][j] = isPal(s, i + 1, j - 1);
        }
         
        int countSubstrings(string s,int n)
        {
            memset(dp, -1, sizeof(dp));
            int count = 0;
         
            // 2 for loops are required to check for
            // all the palindromes in the string.
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    // Increment count for every palindrome
                    if (isPal(s, i, j))
                        count++;
                }
            }
            // return total palindromic substrings
            return count;
        }
        
        
        int smaller_string(int K,int N, string S){
            subString(S, N);
            cout << countSubstrings(S,N);
        }
};



int main (){
    int t;
    cin >> t;
    int d=0;
    while (t--){
        int N;
        string S;
        int K;
        N = S.length();
        cin >> N >> K >> S;
        cout<<"Case #"<<d+1<<":"<<" ";
        d++;
        solution obj;
        obj.smaller_string(K,N,S);
    }   
    return 0;
}