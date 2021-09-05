#include<bits/stdc++.h>

using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
    twoStacks(int n = 100) {size = n; arr = new int[n]; top1 = -1; top2 = size;}

    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
};



int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--) {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1)
            {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            } else if (QueryType == 2) {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";

            }
        }
        cout << endl;
    }
}
// } Driver Code Ends





//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    top1++;
    arr[top1] = x;

}

//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    arr[--top2] = x;

}

//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if (top1 == -1) {
        return -1;
    }
    int res = arr[top1];
    top1--;
    return res;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if (top2 == size) return -1;
    int res2 = arr[top2];
    top2++;
    return res2;
}




/*
Input:
push1(2)
push1(3)
push2(4)
pop1()
pop2()
pop2()

Output:
3 4 -1

Explanation:
push1(2) the stack1 will be {2}
push1(3) the stack1 will be {2,3}
push2(4) the stack2 will be {4}
pop1()   the poped element will be 3
from stack1 and stack1 will be {2}
pop2()   the poped element will be 4
from stack2 and now stack2 is empty
pop2()   the stack2 is now empty hence -1 .*/