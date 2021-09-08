// Problem link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

// You are in charge of the cake for a child's birthday.
// You have decided the cake will have one candle for each year of their total age.


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int birthdayCakeCandles(vector<int> candles) {
	long long mN = 0, count = 0;
	sort(candles.begin(), candles.end());

	for (long long i = candles.size() - 1; i >= 0; i--) {
		if (mN <= candles[i]) {
			mN = candles[i];
			count++;
		}
	}
	return count;

}
// ignore this main function if you are a beginner
int main()
{
	string candles_count_temp;
	getline(cin, candles_count_temp);

	int candles_count = stoi(ltrim(rtrim(candles_count_temp)));

	string candles_temp_temp;
	getline(cin, candles_temp_temp);

	vector<string> candles_temp = split(rtrim(candles_temp_temp));

	vector<int> candles(candles_count);

	for (int i = 0; i < candles_count; i++) {
		int candles_item = stoi(candles_temp[i]);

		candles[i] = candles_item;
	}

	int result = birthdayCakeCandles(candles);

	fout << result << "\n";

	fout.close();

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

Sample Input 0

4
3 2 1 3

Sample Output 0

2

*/