#include <iostream>
using namespace std;

int gcd(int n,int m)
{
 if (n%m ==0) return m;
 n = n%m;
 return gcd(m, n);
}

int main(){
    int n,m;
    n>=m;
    cout << gcd(525,54);
    return 0;
}
