#include<iostream>
using namespace std;

int main ()
{
    int arr[10] = { 12, 4, 3, 1, 15, 45, 33, 21, 10, 2};

    cout << "\nInput list is \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    for (int k = 1; k < 10; k++)
    {
        int temp = arr[k];
        int j = k - 1;
        while (j >= 0 && temp <= arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    cout << "\nSorted list is \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}



// Worst case time complexity  O(n 2 )
// Best case time complexity   O(n)
// Average time complexity O(n 2 )

// A. Space complexity    O(1)