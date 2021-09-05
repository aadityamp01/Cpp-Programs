#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:


    bool ispar(string x)
    {
        // Your code here

        int i = 0;
        stack<char> st;
        while (x[i] != '\0') {
            if (!st.empty()) {
                if (st.top() == '(' && x[i] == ')') st.pop();
                else if (st.top() == '{' && x[i] == '}') st.pop();
                else if (st.top() == '[' && x[i] == ']') st.pop();
                else st.push(x[i]);
            }
            else {
                st.push(x[i]);
            }
            i++;
        }

        return st.empty();

    }

};

// { Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}

//{([])}



/*Expected Time Complexity: O(|x|)
Expected Auixilliary Space: O(|x|)
*/