#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

	//Function to push an element in queue.
	void enqueue(queue<int> &q, int x)
	{
		//Your code here
		q.push(x);

	}

	//Function to remove front element from queue.
	void dequeue(queue<int> &q)
	{
		//Your code here
		q.pop();
	}

	//Function to find the front element of queue.
	int front(queue<int> &q)
	{
		//Your code here
		return q.front();

	}

	//Function to find an element in the queue.
	string find(queue<int> q, int x)
	{
		//Your code here
		while (!q.empty()) {
			if (q.front() == x) {
				return "Yes";
			}
			q.pop();
		}
		return "No";
	}
};



int main() {
	int testcases;
	cin >> testcases;
	while (testcases--)
	{
		queue<int> s;
		int q;
		cin >> q;
		Solution ob;
		while (q--) {
			char ch;
			cin >> ch;

			if (ch == 'i')
			{
				int x;
				cin >> x;

				ob.enqueue(s, x);

			}
			else if (ch == 'r')
			{
				ob.dequeue(s);
			}
			else if (ch == 'h')
			{
				cout << ob.front(s) << endl;
			}
			else if (ch == 'f')
			{
				int x;
				cin >> x;
				cout << ob.find(s, x) << endl;
			}

		}
	}
	return 0;
}

/*
6
i 2 i 4 i 3 i 5 h f 8*/