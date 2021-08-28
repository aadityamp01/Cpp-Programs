#include <iostream>
using namespace std;

void reversearr(int arr[], int n){
    int low = 0, high = n-1;

    while(low< high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main(){
    int arr[12] = {10,5,4,7,30,12,3,4,5,0,45,2};
    reversearr(arr, 12);
    for (int z= 0; z<12; z++)    cout << arr[z] << " ";
}
