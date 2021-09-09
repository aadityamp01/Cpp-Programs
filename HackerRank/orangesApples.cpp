//Problem link: https://www.hackerrank.com/challenges/apple-and-orange/problem

//Sam's house has an apple tree and an orange tree that yield an abundance of fruit...


#include <bits/stdc++.h>

using namespace std;


void countApplesAndOranges(int s, int t, int a, int o, vector<int> apple, vector<int> oranges) {
	long long countApple = 0, countOranges = 0;

	for (long long i = 0; i < apple.size(); i++) {
		apple[i] += a;
	}
	for (long long j = 0; j < oranges.size(); j++) {
		oranges[j] += o;
	}
	for (long long i = 0; i < apple.size(); i++) {
		if (apple[i] >= s && apple[i] <= t ) {
			countApple++;
		}
	}
	for (long long j = 0; j < oranges.size(); j++) {
		if (oranges[j] >= s && oranges[j] <= t) {
			countOranges++;
		}
	}
	cout << countApple << "\n" << countOranges;


}

int main()
{
	string first_multiple_input_temp;
	getline(cin, first_multiple_input_temp);

	vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

	int s = stoi(first_multiple_input[0]);

	int t = stoi(first_multiple_input[1]);

	string second_multiple_input_temp;
	getline(cin, second_multiple_input_temp);

	vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

	int a = stoi(second_multiple_input[0]);

	int b = stoi(second_multiple_input[1]);

	string third_multiple_input_temp;
	getline(cin, third_multiple_input_temp);

	vector<string> third_multiple_input = split(rtrim(third_multiple_input_temp));

	int m = stoi(third_multiple_input[0]);

	int n = stoi(third_multiple_input[1]);

	string apples_temp_temp;
	getline(cin, apples_temp_temp);

	vector<string> apples_temp = split(rtrim(apples_temp_temp));

	vector<int> apples(m);

	for (int i = 0; i < m; i++) {
		int apples_item = stoi(apples_temp[i]);

		apples[i] = apples_item;
	}

	string oranges_temp_temp;
	getline(cin, oranges_temp_temp);

	vector<string> oranges_temp = split(rtrim(oranges_temp_temp));

	vector<int> oranges(n);

	for (int i = 0; i < n; i++) {
		int oranges_item = stoi(oranges_temp[i]);

		oranges[i] = oranges_item;
	}

	countApplesAndOranges(s, t, a, b, apples, oranges);

	return 0;
}




/*

Output Format

Print two integers on two different lines:

    The first integer: the number of apples that fall on Sam's house.
    The second integer: the number of oranges that fall on Sam's house.

Sample Input 0

7 11
5 15
3 2
-2 2 1
5 -6

Sample Output 0

1
1
*/
