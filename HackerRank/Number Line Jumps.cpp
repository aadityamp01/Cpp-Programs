//Problem Link: https://www.hackerrank.com/challenges/kangaroo/problem

//You are choreographing a circus show with various animals. For one act, you are given two kangaroos
// on a number line ready to jump in the positive direction (i.e, toward positive infinity).




#include <bits/stdc++.h>

using namespace std;



string kangaroo(int x1, int v1, int x2, int v2) {
	if (v1 > v2) {

		int remainder = (x1 - x2) % (v2 - v1);

		if (remainder == 0) {
			return "YES";
		}
	}
	return "NO";
}

int main()
{

	string first_multiple_input_temp;
	getline(cin, first_multiple_input_temp);

	vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

	int x1 = stoi(first_multiple_input[0]);

	int v1 = stoi(first_multiple_input[1]);

	int x2 = stoi(first_multiple_input[2]);

	int v2 = stoi(first_multiple_input[3]);

	string result = kangaroo(x1, v1, x2, v2);

	fout << result << "\n";

	fout.close();

	return 0;
}





/*
Sample Input 0

0 3 4 2

Sample Output 0

YES

*/