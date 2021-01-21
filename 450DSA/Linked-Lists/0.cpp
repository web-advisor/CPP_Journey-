// Reverse a linked list
// Approach : Using Recursion 
// Alternates : https://www.geeksforgeeks.org/reverse-a-linked-list/

#include <bits/stdc++.h>
using namespace std;

//  Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void solve();
struct Node *reverseList(struct Node *head);

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

void solve(){
    struct Node *head = NULL, *tail = NULL;
    int n,firstdata,l;
    cin >> n;
    cin >> firstdata;
    head = new Node(firstdata);
    tail = head;
    for (int i = 1; i < n; i++){
        cin >> l;
        tail->next = new Node(l);
        tail = tail->next;
    }
    head = reverseList(head);
    struct Node *temp = head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

struct Node* reverseList(struct Node *head)
{
    if (head == NULL || head->next == NULL)
            return head;
 
        /* reverse the rest list and put 
          the first element at the end */
        Node* rest = reverseList(head->next);
        head->next->next = head;
 
        /* tricky step -- see the diagram */
        head->next = NULL;
 
        /* fix the head pointer */
        return rest;
}