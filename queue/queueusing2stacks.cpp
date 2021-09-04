#include<bits/stdc++.h>

using namespace std;

class StackQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";

            }
        }
        cout << endl;
    }


}
// } Driver Code Ends


/* The structure of the class is
class StackQueue{
private:
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);

}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    // Your Code
    if (s2.empty()) {
        if (s1.empty()) {
            return -1;
        }
        else {
            while (!s1.empty()) {
                int ele = s1.top();
                s1.pop();
                s2.push(ele);
            }
            int ele = s2.top();
            s2.pop();
            return ele;
        }
    }
    // S2 is not empty so just pop out element from it
    else {
        int e = s2.top();
        s2.pop();
        return e;
    }

}

/*

Input:
5
1 2 1 3 2 1 4 2

Output:
2 3

Explanation:
In the first testcase
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2   poped element will be 2 the queue
    will be {3}
1 4 the queue will be {3 4}
2   poped element will be 3.*/