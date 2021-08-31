#include <iostream>

using namespace std;

void fun(int n, int k = 1){
    if (n==0)   return;

    else{
        cout << k << " ";

        fun(n-1, k+1);
        /* fun(n-1);
        cout << n << " "; */
    }
}

int main(){
    int n;
    cin >> n;
    /* for (int i=0; i<n; i++){
        cout << i << " ";
    } */

    fun(n);
    return 0;
}