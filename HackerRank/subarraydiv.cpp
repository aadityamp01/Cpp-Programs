// Problem link: https://www.hackerrank.com/challenges/the-birthday-bar/problem


//Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it...



#include <bits/stdc++.h>

using namespace std;


int birthday(vector<int> s, int d, int m) {
	int count_ways = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		int cs = 0;
		for (int j = i; j < m + i; j++) {
			cs += s[j];
		}
		if (cs == d) {
			count_ways++;
		}
	}
	return count_ways;

}

// Time complexity will be O(n2)


int main()
{

	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));

	string s_temp_temp;
	getline(cin, s_temp_temp);

	vector<string> s_temp = split(rtrim(s_temp_temp));

	vector<int> s(n);

	for (int i = 0; i < n; i++) {
		int s_item = stoi(s_temp[i]);

		s[i] = s_item;
	}

	string first_multiple_input_temp;
	getline(cin, first_multiple_input_temp);

	vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

	int d = stoi(first_multiple_input[0]);

	int m = stoi(first_multiple_input[1]);

	int result = birthday(s, d, m);

	fout << result << "\n";


	return 0;
}




/*
Sample Input 0

5
1 2 1 3 2
3 2

Sample Output 0

2

*/