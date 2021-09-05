#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string str)
    {
        // Your code here
        stack<int> s;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                s.push(str[i] - '0');
            }
            else
            {
                int n1 = s.top();
                s.pop();

                int n2 = s.top();
                s.pop();

                //Can use switch case here;
                if (str[i] == '*')
                {
                    s.push(n1 * n2);
                }
                else if (str[i] == '/')
                {
                    s.push(n2 / n1);
                }
                else if (str[i] == '+')
                {
                    s.push(n1 + n2);
                }
                else if (str[i] == '-')
                {
                    s.push(n2 - n1);
                }
            }
        }

        return s.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string S;
        cin >> S;
        Solution obj;

        cout << obj.evaluatePostfix(S) << endl;
    }
    return 0;
}