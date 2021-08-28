// find index of element by inuting the element
#include <bits/stdc++.h>

using namespace std;

class ArraySearch {
    public:
    int search(int arr[], int n, int x){
    for(int i = 0; i< n; i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}  
};


int main(){
    int arr[5] = {3,4,6,8,9};
    int n = 5;
    int x = 4;
    ArraySearch obj;
    int ans = obj.search(arr, n, x);
    cout << ans;
    return 0;
} 