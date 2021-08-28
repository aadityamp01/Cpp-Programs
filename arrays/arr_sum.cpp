#include <iostream>
using namespace std;

class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
        int arrsum = 0;
        for (int i; i<n; i++){
            arrsum = arrsum + a[i];
            return arrsum;
        }       
    }   
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
}  