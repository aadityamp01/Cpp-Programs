//This is a code to access the elements of the Array using pointers.
//Enter five Elements to display in array..

#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "Enter elements: \n";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}
