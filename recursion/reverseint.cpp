#include <iostream>

using namespace std;

void reverseint(int n){
    if (n==0)   
        return;
    else {
        cout << n << " ";
        reverseint(n-1);
    }
} 

int main(){
    int n;
    cin >> n;
    /* for (int i=n; i>0; i--){
        cout << i << " ";
    } */

    reverseint(n);
    return 0;
}