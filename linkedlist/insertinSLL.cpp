/*
Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list.
Hint: When inserting at the end, make sure that you handle NULL explicitly.

Example 1:

Input:
LinkedList: 9->0->5->1->6->1->2->0->5->0
Output: 5 2 9 5 6
Explanation:
Length of Link List = N = 5
9 0 indicated that 9 should be
inserted in the beginning. Modified
Link List = 9.
5 1 indicated that 5 should be
inserted in the end. Modified Link
List = 9,5.
6 1 indicated that 6 should be
inserted in the end. Modified Link
List = 9,5,6.
2 0 indicated that 2 should be
inserted in the beginning. Modified
Link List = 2,9,5,6.
5 0 indicated that 5 should be
inserted in the beginning. Modified
Link List = 5,2,9,5,6.
Final linked list = 5, 2, 9, 5, 6.*/






#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}



// } Driver Code Ends
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        // Your code here
        Node *temp = new Node(x);
        temp -> next = head;
        return temp;
    }


    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        // Your code here
        Node *temp = new Node(x);

        if (head == NULL) {
            return temp;
        }
        Node *curr = head;
        while (curr -> next != NULL)
            curr = curr -> next;
        curr -> next = temp;
        return head;

    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin >> data;
            cin >> indicator;
            Solution obj;
            if (indicator)
                head = obj.insertAtEnd(head, data);
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head);
    }
    return 0;
}