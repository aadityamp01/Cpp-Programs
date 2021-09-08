// Problem link https://www.hackerrank.com/challenges/mini-max-sum/problem

//Given five positive integers, find the minimum and maximum values
//that can be calculated by summing exactly four of the five integers...


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void miniMaxSum(vector<int> arr) {
	long long minSum = 0, mxSum = 0;
	sort(arr.begin(), arr.end());
	for (long long i = 0; i < arr.size(); i++) {
		if (i < arr.size() - 1) {
			minSum += arr[i];
		}
		if (i > 0) {
			mxSum += arr[i];
		}
	}
	cout << minSum << " " << mxSum;
}

int main()
{

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(5);

	for (int i = 0; i < 5; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	miniMaxSum(arr);

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
	    s.begin(),
	    find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
	    find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
	    s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}




/*
Output Format

Print two space-separated long integers denoting the respective minimum and
maximum values that can be calculated by summing exactly four of the five integers.
(The output can be greater than a 32 bit integer.)

Sample Input

1 2 3 4 5

Sample Output

10 14
*/