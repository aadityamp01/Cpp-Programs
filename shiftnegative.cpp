#include <bits/stdc++.h>
using namespace std;


int shiftneg(int arr[], int n)
{
    sort (arr,arr+n);
}


int main()
{
  int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
  int arr_size = sizeof(arr) /
                sizeof(arr[0]);
 int n = arr_size-1;
   
  shiftneg(arr,n);  // Function Call
  
  for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }


  return 0;
}