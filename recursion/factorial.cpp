#include <iostream>
using namespace std;

/* int factorial(int n)
{// Compute n!
    if(n==0)   //It is a base case; its imp to write correct base case or u will get a segmentation fault;
    return 1;
    else 
    return n*factorial(n-1);
} */

//tail recursion is faster than general rec. 
int fact(int n, int val=1)
{
    if (n==0)
    return val;

    else{
    return fact(n-1,n*val);
    }
}

int main() 
{ 
    int n;
    cin >> n;
    cout << fact(n);
    /* int num;
    cout<<"Enter number for factorial: ";
    cin >>num;
    cout << "Factorial of "
         << num << " is " << factorial(num) << endl;  */
    return 0; 
}
