// Problem link


#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {
        int overall_best = arr[0];
        int curr_best = arr[0];
        
        for (int i = 1; i < n; i++)
        {
        curr_best = max(arr[i], curr_best+arr[i]);
        overall_best = max(overall_best, curr_best);
        }
        return overall_best;
    
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

/*
Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
*/