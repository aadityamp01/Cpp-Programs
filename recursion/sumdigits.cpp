#include <iostream>

using namespace std;

int sumdigits(int n){

    if(n<10)
        return n;

    return sumdigits(n/10) + n%10;
}

int main(){
    cout<<sumdigits(253);
    return 0;
}