#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const unsigned int MOD = 1000000007;

#define Io1 ios_base::sync_with_stdio(false);
#define Io2 cin.tie(NULL);

#define w(x)            int x; cin>>x; while(x--)
#define f(i,n) 			for(int i=0;i<n;i++)

void check() {

#ifndef ONLINE_JUDGE
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);
#endif

}


int main()
{
	Io1;
	Io2;
	check();

	w(t) {
		string s;
		cin >> s;
		ll n = s.size();
		ll index = -1;
		f (i, n)
		{
			if (s[i] == 97)
			{
				index = i;
				break;
			}
		}
		if (index == -1)
			cout << "No" << endl;

		else
		{
			ll l = 1, r = 1, t = 0, wrd = 98, p = 0;

			for (ll i = 0; i < n - 1; i++)
			{
				if (s[index - l] == wrd)
				{
					l++;
					wrd++;
					t++;
				}
				else if (s[index + r] == wrd)
				{
					r++;
					wrd++;
					t++;
				}
				else
				{
					p = 1;
					break;
				}
			}

			if (p == 0)
				cout << "Yes" << endl;

			else
				cout << "No" << endl;

		}
	}


#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif


	return 0;
}

