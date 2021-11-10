// Basic Euclidean Algorithm for GCD
/*The algorithm is based on the below facts.

If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.*/


// C++ program to demonstrate
// Basic Euclidean Algorithm
#include <bits/stdc++.h>
using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Driver Code
int main()
{
	int a = 10, b = 15;
	cout << "GCD(" << a << ", "
	     << b << ") = " << gcd(a, b)
	     << endl;
	a = 35, b = 10;
	cout << "GCD(" << a << ", "
	     << b << ") = " << gcd(a, b)
	     << endl;
	a = 31, b = 2;
	cout << "GCD(" << a << ", "
	     << b << ") = " << gcd(a, b)
	     << endl;
	return 0;
}


Time Complexity: O(Log min(a, b))




// Extended Euclidean Algorithm


/*
While the Euclidean algorithm calculates only the greatest common divisor (GCD) of two integers a and b,
the extended version also finds a way to represent GCD in terms of a and b, i.e. coefficients x and y
for which:

a⋅x+b⋅y = gcd(a,b)

*/



#include <iostream>
#include <tuple>        // std::tuple, std::make_tuple, std::tie
using namespace std;

// Recursive function to demonstrate the extended Euclidean algorithm.
// It returns multiple values using tuple in C++.
tuple<int, int, int> extended_gcd(int a, int b)
{
	if (a == 0) {
		return make_tuple(b, 0, 1);
	}

	int gcd, x, y;

	// unpack tuple returned by function into variables
	tie(gcd, x, y) = extended_gcd(b % a, a);

	return make_tuple(gcd, (y - (b / a) * x), x);
}

int main()
{
	int a = 30;
	int b = 50;

	tuple<int, int, int> t = extended_gcd(a, b);

	int gcd = get<0>(t);
	int x = get<1>(t);
	int y = get<2>(t);

	cout << "The GCD is " << gcd << endl;
	cout << "x = " << x << " y = " << y << endl;
	cout << a << "*" << x << " + " << b << "*" << y << " = " << gcd << endl;

	return 0;
}



// **********************OR***************************


#include <bits/stdc++.h>
using namespace std;

// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y)
{
	// Base Case
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1; // To store results of recursive call
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// Update x and y using results of
	// recursive call
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}



int main()
{
	int x, y, a = 35, b = 15;
	int g = gcdExtended(a, b, &x, &y);
	cout << "GCD(" << a << ", " << b
	     << ") = " << g << endl;
	return 0;
}



