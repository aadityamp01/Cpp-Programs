#include <iostream>
using namespace std;


class Solution {
public:

    long long NcR(long long n, long long k) {
        if (n == 0 || n < k) return 0;
        long long res = 1;
        if (k > n - k)
            k = n - k;
        for (int i = 0; i < k; ++i) {
            res *= (n - i);
            res /= (i + 1);
        }

        return res;
    }

    long long count(long long x) {
        long long r = 0;
        int number_of_set_bits = 0;
        for (int i = 0; i < 64; ++i) {
            if (x & 1) {
                number_of_set_bits++;
                long long nc_r = NcR(i, number_of_set_bits);
                r += nc_r;
            }
            x = x >> 1;
        }
        return r;
    }
};


int main() {

    int t;
    long long x;  x = 34565565555;
    Solution ob;
    cout << ob.count(x) << '\n';

    return 0;
}