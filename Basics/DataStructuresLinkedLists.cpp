#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;
    Node *prev;
    Node();
    Node(int, int);
};

class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList();
    SinglyLinkedList(Node *n);
    Node *nodeExists(int);
    void appendNode(Node *n);
    void prependNode(Node *n);
    void insertNodeAfter(int k, Node *n);
    void deleteNodeByKey(int);
    void updateNodeByKey(int, int);
    void printList();
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList();
    DoublyLinkedList(Node *n);
    Node *nodeExists(int);
    void appendNode(Node *n);
    void prependNode(Node *n);
    void insertNodeAfter(int k, Node *n);
    void deleteNodeByKey(int);
    void updateNodeByKey(int, int);
    void printList();
};

int main()
{
    char ds;
    int decide = 1;
    while (decide)
    {
        cout << "\n\t Welcome to Data Structures via Linked Lists Menu : ";
        cout << "\n\t Choose the Data Structure you want to implement . Press 0 to Exit ! ";
        cout << "\n\t 1. Singly Linked Lists ";
        cout << "\n\t 2. Doubly Linked Lists ";
        cout << "\n\t 3. Circular Linked Lists ";
        cout << "\n\t 4. Stack via Linked Lists";
        cout << "\n\t 5. Queue via Linked Lists ";
        cout << "\n\t 6. Double-Ended Queue via Linked Lists";
        cout << "\n\t 7. Input-Restricted DEque via Linked Lists ";
        cout << "\n\t 8. Output-Restricted DEque via Linked Lists";
        cout << "\n\t 9. Circular Queue via Linked Lists";
        cout << "\n\t Enter your Choice : ";
        scanf(" %c", &ds);
        switch (ds)
        {
        case '0':
        {
            cout << "\n\t Closing Data Structures Menu ... .. . ";
            exit(0);
            break;
        }
        case '1':
        {
            SinglyLinkedList s;
            int key1, k1, data1;
            char choice, ans;
            do
            {
                cout << "\n\t Welcome to Singly Linked Lists Menu ";
                cout << "\n\t Choose Operation you want to perform . Enter 0 to Main Menu ";
                cout << "\n\t 1. appendNode() ";
                cout << "\n\t 2. prependNode() ";
                cout << "\n\t 3. insertNodeAfter() ";
                cout << "\n\t 4. deleteNodeByKey() ";
                cout << "\n\t 5. updateNodeByKey() ";
                cout << "\n\t 6. print() ";
                cout << "\n\t 7. Clear Screen ";
                cout << "\n\t Enter your choice : ";
                scanf(" %c", &choice);
                Node *n1 = new Node();
                switch (choice)
                {
                case '0':
                    cout << "\n\t Closing Singly Linked List Menu ... .. .";
                    goto Continue;
                    break;

                case '1':
                    cout << "\n\t Append Node Operation \n\t Enter key & data of the Node to be Appended : ";
                    cin >> key1;
                    cin >> data1;
                    n1->key = key1;
                    n1->data = data1;
                    s.appendNode(n1);
                    //cout<<n1.key<<" = "<<n1.data<<endl;
                    break;

                case '2':
                    cout << "\n\t Prepend Node Operation \n\t Enter key & data of the Node to be Prepended : ";
                    cin >> key1;
                    cin >> data1;
                    n1->key = key1;
                    n1->data = data1;
                    s.prependNode(n1);
                    break;

                case '3':
                    cout << "\n\t Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node : ";
                    cin >> k1;
                    cout << "\n\t Enter key & data of the New Node first: " << endl;
                    cin >> key1;
                    cin >> data1;
                    n1->key = key1;
                    n1->data = data1;

                    s.insertNodeAfter(k1, n1);
                    break;

                case '4':

                    cout << "\n\t Delete Node By Key Operation - \n\t Enter key of the Node to be deleted : ";
                    cin >> k1;
                    s.deleteNodeByKey(k1);

                    break;
                case '5':
                    cout << "\n\t Update Node By Key Operation - \n\t Enter key & NEW data to be updated : ";
                    cin >> key1;
                    cin >> data1;
                    s.updateNodeByKey(key1, data1);

                    break;
                case '6':
                    s.printList();

                    break;
                case '7':
                    system("cls");
                    break;

                default:
                repeat:
                    printf("\n\t Wrong Input :-( ");
                    break;
                }
                printf("\n\t Do you Want to continue ?? (Y/N) ");
                scanf(" %c", &ans);
                if (!(ans == 'y' || ans == 'n' || ans == 'N' || ans == 'Y'))
                    goto repeat;
            } while (ans == 'Y' || ans == 'y');
        }
        break;
        case '2':
        {
            DoublyLinkedList d;
            int key1, k1, data1;
            char choice, ans;
            do
            {
                cout << "\n\t Welcome to Doubly Linked Lists Menu ";
                cout << "\n\t Choose Operation you want to perform . Enter 0 to Main Menu ";
                cout << "\n\t 1. appendNode() ";
                cout << "\n\t 2. prependNode() ";
                cout << "\n\t 3. insertNodeAfter() ";
                cout << "\n\t 4. deleteNodeByKey() ";
                cout << "\n\t 5. updateNodeByKey() ";
                cout << "\n\t 6. print() ";
                cout << "\n\t 7. Clear Screen ";
                cout << "\n\t Enter your choice : ";
                scanf(" %c", &choice);
                Node *n1 = new Node();
                switch (choice)
                {
                case '0':
                    cout << "\n\t Closing Doubly Linked List Menu ... .. .";
                    goto Continue;
                    break;

                case '1':
                    cout << "\n\t Append Node Operation \n\t Enter key & data of the Node to be Appended : ";
                    cin >> key1;
                    cin >> data1;
                    n1->key = key1;
                    n1->data = data1;
                    d.appendNode(n1);
                    //cout<<n1.key<<" = "<<n1.data<<endl;
                    break;

                case '2':
                    cout << "\n\t Prepend Node Operation \n\t Enter key & data of the Node to be Prepended : ";
                    cin >> key1;
                    cin >> data1;
                    n1->key = key1;
                    n1->data = data1;
                    d.prependNode(n1);
                    break;

                case '3':
                    cout << "\n\t Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node : ";
                    cin >> k1;
                    cout << "\n\t Enter key & data of the New Node first: " << endl;
                    cin >> key1;
                    cin >> data1;
                    n1->key = key1;
                    n1->data = data1;

                    d.insertNodeAfter(k1, n1);
                    break;

                case '4':

                    cout << "\n\t Delete Node By Key Operation - \n\t Enter key of the Node to be deleted : ";
                    cin >> k1;
                    d.deleteNodeByKey(k1);

                    break;
                case '5':
                    cout << "\n\t Update Node By Key Operation - \n\t Enter key & NEW data to be updated : ";
                    cin >> key1;
                    cin >> data1;
                    d.updateNodeByKey(key1, data1);

                    break;
                case '6':
                    d.printList();

                    break;
                case '7':
                    system("cls");
                    break;

                default:
                repeatdll:
                    printf("\n\t Wrong Input :-( ");
                    break;
                }
                printf("\n\t Do you Want to continue ?? (Y/N) ");
                scanf(" %c", &ans);
                if (!(ans == 'y' || ans == 'n' || ans == 'N' || ans == 'Y'))
                    goto repeatdll;
            } while (ans == 'Y' || ans == 'y');
        }
        break;
        default:
            cout << "\n\t Wrong Input ";
            break;
        }
    Continue:
        cout << "\n\t Do you want to Continue on Data Structures Menu ? (0/1) ";
        cin >> decide;
        if (!(decide == 0 || decide == 1))
        {
            cout << "\n\t Wrong Input .. '0' or '1' only ! ";
            goto Continue;
        }
    }
    return 0;
}

// ------------------ Node Class Methods Definition -----------
Node::Node()
{
    key = 0;
    data = 0;
    next = NULL;
    prev = NULL;
}

Node::Node(int k, int d)
{
    key = k;
    data = d;
    next = NULL;
    prev = NULL;
}

// --------- SinglyLinkedList Class Methods Definition---------
SinglyLinkedList::SinglyLinkedList()
{
    head = NULL;
}

SinglyLinkedList::SinglyLinkedList(Node *n)
{
    head = n;
}

Node *SinglyLinkedList::nodeExists(int k)
{
    Node *temp = NULL;
    Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->key == k)
        {
            // Node Key alreaddy exists
            temp = ptr;
        }
        ptr = ptr->next;
    }
    return temp;
}

void SinglyLinkedList::appendNode(Node *n)
{
    if (nodeExists(n->key) != NULL)
    {
        cout << "\n\t Node Already Exists with key value : " << n->key << " . Append another node with different key value . ";
    }
    else
    {
        if (head == NULL)
        {
            head = n;
            cout << "\n\t Node appended ";
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            cout << "\n\t Node appended";
        }
    }
}

void SinglyLinkedList::prependNode(Node *n)
{
    if (nodeExists(n->key) != NULL)
    {
        cout << "\n\t Node Already Exists with key value : " << n->key << " . Append another node with different key value . ";
    }
    else
    {
        n->next = head;
        head = n;
        cout << "\n\t Node Prepended";
    }
}

void SinglyLinkedList::insertNodeAfter(int k, Node *n)
{
    Node *ptr = nodeExists(k);
    if (ptr == NULL)
    {
        cout << "\n\t No Node exists with key value : " << k;
    }
    else
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "\n\t Node Already Exists with key value : " << n->key << " . Append another node with different key value . ";
        }
        else
        {
            n->next = ptr->next;
            ptr->next = n;
        }
    }
}

void SinglyLinkedList::deleteNodeByKey(int k)
{
    if (head == NULL)
    {
        cout << "\n\t Singly Linked Lists already Empty . Can't Delete  !";
    }
    else if (head != NULL)
    {
        if (head->key == k)
        {
            head = head->next;
            cout << "\n\t Node UNLINKED with key values : " << k;
        }
        else
        {
            Node *temp = NULL;
            Node *prevptr = head;
            Node *currentptr = head->next;
            while (currentptr != NULL)
            {
                if (currentptr->key == k)
                {
                    temp = currentptr;
                    currentptr = NULL;
                }
                else
                {
                    prevptr = prevptr->next;
                    currentptr = currentptr->next;
                }
            }
            if (temp != NULL)
            {
                prevptr->next = temp->next;
                cout << "\n\t Node UNLINKED with key value : " << k;
            }
            else
            {
                cout << "\n\t Node doesn't exist with key value : " << k;
            }
        }
    }
}

void SinglyLinkedList::updateNodeByKey(int k, int d)
{
    Node *ptr = nodeExists(k);
    if (ptr != NULL)
    {
        ptr->data = d;
        cout << "\n\t Node data Updated successfully . ";
    }
    else
    {
        cout << "\n\t Node doesn't exist with key value : " << k;
    }
}

void SinglyLinkedList::printList()
{
    if (head == NULL)
    {
        cout << "\n\t No Nodes in Singly Linked List !";
    }
    else
    {
        cout << "\n\t Singly Linked Lists values :: ";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << " ( " << temp->key << " , " << temp->data << " ) --> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
}

// ----------------- DoublyLinkedList Class methods Definition -----------------
DoublyLinkedList::DoublyLinkedList()
{
    head = NULL;
}

DoublyLinkedList::DoublyLinkedList(Node *n)
{
    head = n;
}

Node *DoublyLinkedList::nodeExists(int k)
{
    Node *temp = NULL;
    Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->key == k)
        {
            // Node Key alreaddy exists
            temp = ptr;
        }
        ptr = ptr->next;
    }
    return temp;
}

void DoublyLinkedList::appendNode(Node *n)
{
    if (nodeExists(n->key) != NULL)
    {
        cout << "\n\t Node Already Exists with key value : " << n->key << " . Append another node with different key value . ";
    }
    else
    {
        if (head == NULL)
        {
            head = n;
            cout << "\n\t Node appended ";
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->prev = ptr;
            cout << "\n\t Node appended";
        }
    }
}

void DoublyLinkedList::prependNode(Node *n)
{
    if (nodeExists(n->key) != NULL)
    {
        cout << "\n\t Node Already Exists with key value : " << n->key << " . Append another node with different key value . ";
    }
    else
    {
        if (head == NULL)
        {
            head = n;
            cout << "\n\t Node Prepended ";
        }
        else
        {
            head->prev = n;
            n->next = head;
            head = n;
            cout << "\n\t Node Prepended";
        }
    }
}

void DoublyLinkedList::insertNodeAfter(int k, Node *n)
{
    Node *ptr = nodeExists(k);
    if (ptr == NULL)
    {
        cout << "\n\t No Node exists with key value : " << k;
    }
    else
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "\n\t Node Already Exists with key value : " << n->key << " . Append another node with different key value . ";
        }
        else
        {
            Node *nextNode = ptr->next;
            if (nextNode == NULL)
            {
                ptr->next = n;
                n->prev = ptr;
                cout << "\n\t Node inserted at the End  .";
            }
            else
            {
                n->next = nextNode;
                nextNode->prev = n;
                n->prev = ptr;
                ptr->next = n;
                cout << "\n\t Node inserted in Between . ";
            }
        }
    }
}

void DoublyLinkedList::deleteNodeByKey(int k)
{
    if (head == NULL)
    {
        cout << "\n\t Doubly Linked Lists already Empty . Can't Delete  !";
    }
    else if (head != NULL)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "\n\t No node exists with key value: " << k;
        }
        else
        {

            if (head->key == k)
            {
                head = head->next;
                cout << "\n\t Node UNLINKED with keys value : " << k;
            }
            else
            {
                Node *nextNode = ptr->next;
                Node *prevNode = ptr->prev;
                // deleting at the end
                if (nextNode == NULL)
                {

                    prevNode->next = NULL;  
                    cout << "\n\t Node Deleted at the END ";
                }

                //deleting in between
                else
                {
                    prevNode->next = nextNode;
                    nextNode->prev = prevNode;
                    cout << "\n\t Node Deleted in Between" << endl;
                }
            }
        }
    }
}

void DoublyLinkedList::updateNodeByKey(int k, int d)
{
    Node *ptr = nodeExists(k);
    if (ptr != NULL)
    {
        ptr->data = d;
        cout << "\n\t Node data Updated successfully . ";
    }
    else
    {
        cout << "\n\t Node doesn't exist with key value : " << k;
    }
}

void DoublyLinkedList::printList()
{
    if (head == NULL)
    {
        cout << "\n\t No Nodes in Singly Linked List !";
    }
    else
    {
        cout << "\n\t Doubly Linked Lists values :: ";
        Node *temp = head;
        cout << "\n\t NULL <--";
        while (temp != NULL)
        {
            cout << " ( " << temp->key << " , " << temp->data << " ) <--> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
}