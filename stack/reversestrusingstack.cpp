#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        cout << ch;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


//return the address of the string
char* reverse(char *str, int len)
{
    //code here
    stack<char>s;
    for (int i = 0; i <= len - 1; i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i <= len - 1; i++)
    {
        str[i] = s.top();
        s.pop();
    }
    return str;

}


/*
Input: S="GeeksforGeeks"
Output: skeeGrofskeeG*/