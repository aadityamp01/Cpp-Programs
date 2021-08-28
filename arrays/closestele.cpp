//Given an array A[] of N integers and an integer X. The task is to find the sum of three integers in A[] such that it is closest to X.

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // code here
        //Sorting array first
        sort(A,A+N);
        int closenum= -1;       //initiallizing closest num
        int gap=int(1e5);       //infinite num
        
        for(int i=0;i<N-2;i++)      //taking loop to check triplets sum from i-2th num
        {
            int num=A[i];
            int l=i+1, r=N-1;
            
            while(l<r){
                int s=A[l] + A[r]+num;
                if(s ==X){
                    return X;
                }
                else if(s<X){
                    if(abs(s-X)<gap){
                        gap=abs(s-X);
                        closenum=s;
                    }
                    else if(abs(s-X)==gap){
                        closenum=max(closenum,s);}
                    l++;
                }
                else{
                    if(abs(s-X)<gap){
                        gap=abs(s-X);
                        closenum=s;
                    }
                    else if(abs(s-X)==gap){
                        closenum=max(closenum,s);
                    }
                    r--;
                }
            }
        }
        return closenum;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}  

/* 
Input:
N = 4
A[] = {-1 , 2, 1, -4}
X = 1
Output: 2
Explaination: 
Sums of triplets:
(-1) + 2 + 1 = 2
(-1) + 2 + (-4) = -3
2 + 1 + (-4) = -1
2 is closest to 1. */