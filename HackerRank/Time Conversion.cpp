// Problem link https://www.hackerrank.com/challenges/time-conversion/problem

// Given a time in 12 -hour AM/PM format, convert it to military (24-hour) time.
// Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.




#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
	string hr_str = s.substr(0, 2);
	string session = s.substr(8);
	if ( session == "PM" && hr_str != "12")
	{
		hr_str = to_string(stoi(hr_str) + 12);
	}
	else if (session == "PM")
	{
		hr_str = "12";
	}
	else if (hr_str == "12")
	{
		hr_str = "00";
	}
	return hr_str + s.substr(2, 6);


}

int main()
{
	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}




/*

Sample Input 0

07:05:45PM

Sample Output 0

19:05:45

*/