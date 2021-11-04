// Algorithm - Binary Search

#include <iostream>
using namespace std;

// Using iterative approach
int binarysearch(int arr[], int x, int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x)  return mid;

        else if (arr[mid] < x)   low = mid + 1;

        else {high = mid - 1;}
    }
    return -1;
}

// Time Complexity - O(log n);
// Space Complexity - O(1);

//Using recursive approach

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

// Time Complexity - O(log n);
// Space Complexity - O(log n);

int main() {
    int n = 4;
    int x = 30;
    int arr[4] = {10, 20, 30, 40};
    /*int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    cout << result;*/

    cout << binarysearch(arr, x, n);
    return 0;
}