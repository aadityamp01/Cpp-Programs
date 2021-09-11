#include <iostream>
using namespace std;

void lRotateone(int arr[], int n){
    int temp = arr[0];
    for (int i=1; i<n; i++){
        arr[i-1] = arr[i];  
    }
    arr[n-1] = temp;
}
int main(){
    int arr[4] = {1,2,3,4};
    int n = 4;
    cout << lRotateone(arr, n);
    return 0;
}