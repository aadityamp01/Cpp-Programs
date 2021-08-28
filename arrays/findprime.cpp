//Find prime numbers by given number by sieve method

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int N = 1e6 + 5;       
vector<bool>prime(N, true);
vector<int>cprime(N, 0);

void primegame()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (prime[i])
            cprime[i] = cprime[i - 1] + 1;
        else
            cprime[i] = cprime[i - 1];
    }
}

int main(){
    primegame();
    ll x;
    cin >> x;
    cout << cprime[x];
    return 0;
}