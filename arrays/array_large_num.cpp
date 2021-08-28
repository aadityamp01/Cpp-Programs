#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number[n];
    int greater, smaller;

    for (int i = 0; i<n; i++) cin >> number[i];
    

    greater = number[0];
    smaller = number[0];

    for (int i = 1; i<n; i++)
    {
        if (greater < number[i]){
            greater = number[i];
        }
        else if (smaller > number[i]){
                smaller = number [i];
            }
    }
    cout<< "The greater num is " << greater<< endl;
    cout<< "The smaller num is " << smaller;
    return 0;
}
//-----------------------------------------------------------------------------------------------

// GFG Correct answer by using full library pre defined macros INT_MIN, INT_MAX
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int i,n,l=INT_MIN,m=INT_MAX;
       cin>>n;
       int a[n+1];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>l)
           {
               l=a[i];
           }
           if(a[i]<m)
           {
               m=a[i];
           }
       }
       cout<<l<<" "<<m<<endl;
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------
// GFG Windiow

/* #include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
	while (--t){
	    int n;
	    cin >> n;
	    int number[n];
        int greater, smaller;
    
        for (int i = 0; i<n; i++) cin >> number[i];
        
    
        greater = number[0];
        smaller = number[0];
    
        for (int i = 1; i<n; i++)
        {
            if (number[i] >= greater){
                greater = number[i];
            }
            else if (number[i] <= smaller){
                    smaller = number [i];
                }
        }
        cout<< greater<< " " << smaller << endl;
    }
    return 0;
     
 }

 // Input format
2   // test cases
4   // n size of array
5 4 2 1
1  
8 */