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

int maximum(struct Node* head);
int minimum(struct Node* head);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout << maximum(head) << " " << minimum(head) << endl;
    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

int maximum(Node *head)
{
    //Your code here
    int temp = 0;
    Node*curr = head;

    while (curr != NULL) {

        if (curr -> data > temp) {
            temp = curr-> data;
        }
        curr = curr -> next;
    }
    return temp;

}

int minimum(Node *head)
{
    //Your code here
    int temp2  = head ->data;
    Node*curr2 = head;

    while (curr2 != NULL) {
        if (curr2-> data < temp2) {
            temp2 = curr2 -> data;
        }
        curr2 = curr2 -> next;
    }
    return temp2;
}