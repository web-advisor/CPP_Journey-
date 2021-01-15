#include <iostream>
#include <stdio.h>
#include <string>
#define N 5
using namespace std;

class Stack
{
private:
  int arr[N];
  int top;

public:
  Stack();
  bool isEmpty();
  bool isFull();
  void push(int);
  int pop();
  int count();
  int peek(int);
  void change(int, int);
  void display();
};

class Queue
{
private:
  int front;
  int rear;
  int arr[N];

public:
  Queue();
  bool isEmpty();
  bool isFull();
  void enqueue(int);
  int dequeue();
  int count();
  int peek(int);
  void change(int, int);
  void display();
};

class CQueue
{
private:
  int front;
  int rear;
  int arr[N];
  int itemCount;

public:
  CQueue();
  bool isEmpty();
  bool isFull();
  void enqueue(int);
  int dequeue();
  int count();
  int peek(int);
  void change(int, int);
  void display();
};

int main()
{
  char ds;
  int decide = 1;
  while (decide)
  {
    cout << "\n\t Welcome to Data Structures via Array Menu : ";
    cout << "\n\t Choose the Data Structure you want to implement . Press 0 to Exit ! ";
    cout << "\n\t 1. Array ";
    cout << "\n\t 2. Stack via Array";
    cout << "\n\t 3. Queue via Array ";
    cout << "\n\t 4. Double-Ended Queue via Array";
    cout << "\n\t 5. Input-Restricted DEque via Array";
    cout << "\n\t 6. Output-Restricted DEque via Array";
    cout << "\n\t 6. Circular Queue via Array";
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
    case '2':
    {
      Stack S;
      int value, position;
      char choice, ans;
      do
      {
        printf("\n\t Welcome to Stack Menu : ");
        cout << "\n\t Choose the Operation you want to perform : Press 0 to Main Menu ! ";
        cout << "\n\t 1. Push()";
        cout << "\n\t 2. Pop()";
        cout << "\n\t 3. isEmpty()";
        cout << "\n\t 4. isFull()";
        cout << "\n\t 5. Peek()";
        cout << "\n\t 6. Count()";
        cout << "\n\t 7. Change()";
        cout << "\n\t 8. Display()";
        cout << "\n\t 9. Clear Screen";
        printf("\n\t Enter your Choice : ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '0':
          cout << "\n\t Stack Menu Closing ... .. .";
          goto Continue;
          break;

        case '1':
          cout << "\n\t Enter an item to Push in the Stack : ";
          cin >> value;
          S.push(value);
          break;

        case '2':
          cout << "\n\t Pop function Called : Popped Value " << S.pop();
          break;

        case '3':
          if (S.isEmpty())
          {
            cout << "\n\t Stack is Empty !";
          }
          else
          {
            cout << "\n\t Stack is not Empty ! ";
          }
          break;

        case '4':
          if (S.isFull())
          {
            cout << "\n\t Stack is Full !";
          }
          else
          {
            cout << "\n\t Stack is not Full ! ";
          }
          break;

        case '5':
          cout << "\n\t Enter the position of item you want to peek : ";
          cin >> position;
          cout << "\n\t Peek function Called : Value at position " << position << " is " << S.peek(position);
          break;

        case '6':
          cout << "\n\t Count function Called : Nummber of Items in the Stack are : " << S.count();
          break;

        case '7':
          cout << "\n\t Change Function Called : ";
          cout << "\n\t Enter the position of the item you want to change : ";
          cin >> position;
          cout << "\n\t Enter the modified value of the item : ";
          cin >> value;
          S.change(position, value);
          break;

        case '8':
          cout << "\n\t Display Function Called : ";
          S.display();
          break;

        case '9':
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
      } while (ans == 'y' || ans == 'Y');
    }
    break;

    case '3':
    {
      Queue Q;
      int value, position;
      char choice, ans;
      do
      {
        printf("\n\t Welcome to Queue Menu : ");
        cout << "\n\t Choose the Operation you want to perform : Press 0 to Main Menu ! " << endl;
        cout << "\n\t 1. Enqueue()";
        cout << "\n\t 2. Dequeue()";
        cout << "\n\t 3. isEmpty()";
        cout << "\n\t 4. isFull()";
        cout << "\n\t 5. Peek()";
        cout << "\n\t 6. Count()";
        cout << "\n\t 7. Change()";
        cout << "\n\t 8. Display()";
        cout << "\n\t 9. Clear Screen";
        printf("\n\t Enter your Choice : ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '0':
          cout << "\n\t Queue Menu Closing ... .. .";
          goto Continue;
          break;

        case '1':
          cout << "\n\t Enter an item to Enter in the Queue : ";
          cin >> value;
          Q.enqueue(value);
          break;

        case '2':
          cout << "\n\t Dequeue function Called : Deleted Value " << Q.dequeue() << endl;
          break;

        case '3':
          if (Q.isEmpty())
          {
            cout << "\n\t Queue is Empty !";
          }
          else
          {
            cout << "\n\t Queue is not Empty ! ";
          }
          break;

        case '4':
          if (Q.isFull())
          {
            cout << "\n\t Queue is Full !";
          }
          else
          {
            cout << "\n\t Queue is not Full ! ";
          }
          break;

        case '5':
          cout << "\n\t Enter the position of item you want to peek : ";
          cin >> position;
          cout << "\n\t Peek function Called : Value at position " << position << " is " << Q.peek(position) << endl;
          break;

        case '6':
          cout << "\n\t Count function Called : Nummber of Items in the Queue are : " << Q.count() << endl;
          break;

        case '7':
          cout << "\n\t Change Function Called : ";
          cout << "\n\t Enter the position of the item you want to change : ";
          cin >> position;
          cout << "\n\t Enter the modified value of the item : ";
          cin >> value;
          Q.change(position, value);
          break;

        case '8':
          cout << "\n\t Display Function Called : ";
          Q.display();
          break;

        case '9':
          system("cls");
          break;

        default:
        repeated:
          printf("\n\t Wrong Input :-( ");
          break;
        }

        printf("\n\t Do you Want to continue ?? (Y/N) ");
        scanf(" %c", &ans);
        if (!(ans == 'y' || ans == 'n' || ans == 'N' || ans == 'Y'))
          goto repeated;
      } while (ans == 'y' || ans == 'Y');
    }
    break;

    case '6':
    {
      CQueue CQ;
      int value, position;
      char choice, ans;
      do
      {
        printf("\n\t Welcome to Circular Queue Menu : \n");
        cout << "\n\t Choose the Operation you want to perform : Press 0 to Main Menu  ! " << endl;
        cout << "\n\t 1. Enqueue()";
        cout << "\n\t 2. Dequeue()";
        cout << "\n\t 3. isEmpty()";
        cout << "\n\t 4. isFull()";
        cout << "\n\t 5. Peek()";
        cout << "\n\t 6. Count()";
        cout << "\n\t 7. Change()";
        cout << "\n\t 8. Display()";
        cout << "\n\t 9. Clear Screen";
        printf("\n\t Enter your Choice : ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '0':
          cout << "\n\t Circular Queue Menu Closing ... .. .";
          goto Continue;
          break;

        case '1':
          cout << "\n\t Enter an item to Enter in the Queue : ";
          cin >> value;
          CQ.enqueue(value);
          break;

        case '2':
          cout << "\n\t Dequeue function Called : Deleted Value " << CQ.dequeue() << endl;
          break;

        case '3':
          if (CQ.isEmpty())
          {
            cout << "\n\t Queue is Empty !";
          }
          else
          {
            cout << "\n\t Queue is not Empty ! ";
          }
          break;

        case '4':
          if (CQ.isFull())
          {
            cout << "\n\t Queue is Full !";
          }
          else
          {
            cout << "\n\t Queue is not Full ! ";
          }
          break;

        case '5':
          cout << "\n\t Enter the position of item you want to peek : ";
          cin >> position;
          cout << "\n\t Peek function Called : Value at position " << position << " is " << CQ.peek(position) << endl;
          break;

        case '6':
          cout << "\n\t Count function Called : Nummber of Items in the Queue are : " << CQ.count() << endl;
          break;

        case '7':
          cout << "\n\t Change Function Called : ";
          cout << "\n\t Enter the position of the item you want to change : ";
          cin >> position;
          cout << "\n\t Enter the modified value of the item : ";
          cin >> value;
          CQ.change(position, value);
          break;

        case '8':
          cout << "\n\t Display Function Called : ";
          CQ.display();
          break;

        case '9':
          system("cls");
          break;

        default:
        repeatCE:
          printf("\n\t Wrong Input :-( ");
          break;
        }

        printf("\n\t Do you Want to continue ?? (Y/N) ");
        scanf(" %c", &ans);
        if (!(ans == 'y' || ans == 'n' || ans == 'N' || ans == 'Y'))
          goto repeatCE;
      } while (ans == 'y' || ans == 'Y');
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

// ----------------------------------------- Stack Class Functions Definition -------------------------------------
Stack::Stack()
{
  top = -1;
  for (auto &i : arr)
  {
    i = 0;
  }
}

bool Stack::isEmpty()
{
  if (top == -1)
    return true;
  else
    return false;
}

bool Stack::isFull()
{
  if (top == N - 1)
    return true;
  else
    return false;
}

void Stack::push(int val)
{
  if (isFull())
    cout << "\n\t Stack Overflow ! ";
  else
  {
    top++;
    arr[top] = val;
  }
}

int Stack::pop()
{
  if (isEmpty())
  {
    cout << "\n\t Stack Underflow ";
    return 0;
  }
  else
  {
    int popValue = arr[top];
    arr[top] = 0;
    top--;
    return popValue;
  }
}

int Stack::count()
{
  return (top + 1);
}

int Stack::peek(int pos)
{
  if (isEmpty())
  {
    cout << "\n\t Stack Underflow ! ";
    return 0;
  }
  else
  {
    return arr[pos];
  }
}

void Stack::change(int pos, int val)
{
  arr[pos] = val;
  cout << "\n\t Value Changed at location " << pos << endl;
}

void Stack::display()
{
  cout << "\n\t All Values of Stack Are : " << endl;
  for (int i = N - 1; i >= 0; i--)
  {
    cout << "\t " << arr[i] << endl;
  }
}

// --------------------- Queue Class function definitions ---------------------------------------
Queue::Queue()
{
  front = -1;
  rear = -1;
  for (auto &i : arr)
  {
    i = 0;
  }
}

bool Queue::isEmpty()
{
  if (front == -1 && rear == -1)
    return true;
  else
    return false;
}

bool Queue::isFull()
{
  if (count() == N)
    return true;
  else
    return false;
}

void Queue::enqueue(int val)
{
  if (isFull())
  {
    cout << "\n\t Queue is Full !";
    return;
  }
  else if (isEmpty())
  {
    rear = front = 0;
    arr[rear] = val;
  }
  else
  {
    rear++;
    arr[rear] = val;
  }
}

int Queue::dequeue()
{
  int x;
  if (isEmpty())
  {
    cout << "\n\t Queue is Empty .!";
    return 0;
  }
  else if (front == rear)
  {
    x = arr[front];
    arr[front] = 0;
    rear = front = -1;
    return x;
  }
  else
  {
    x = arr[front];
    arr[front] = 0;
    front++;
    return x;
  }
}

int Queue::count()
{
  if (isEmpty())
  {
    return 0;
  }
  else
  {
    return (rear - front + 1);
  }
}

int Queue::peek(int pos)
{
  if (isEmpty())
  {
    cout << "\n\t Queue Underflow ! ";
    return 0;
  }
  else
  {
    return arr[pos];
  }
}

void Queue::change(int pos, int val)
{
  arr[pos] = val;
  cout << "\n\t Value Changed at location " << pos << endl;
}

void Queue::display()
{
  cout << "\n\t All Values of Queue Are : " << endl;
  for (int i = N - 1; i >= 0; i--)
  {
    cout << "\t " << arr[i] << endl;
  }
}

// --------------------- Circular Queue Class function definitions ---------------------------------------
CQueue::CQueue()
{
  front = -1;
  rear = -1;
  itemCount = 0;
  for (auto &i : arr)
  {
    i = 0;
  }
}

bool CQueue::isEmpty()
{
  if (front == -1 && rear == -1)
    return true;
  else
    return false;
}

bool CQueue::isFull()
{
  if ((rear + 1) % N == front)
    return true;
  else
    return false;
}

void CQueue::enqueue(int val)
{
  if (isFull())
  {
    cout << "\n\t Queue is Full !";
    return;
  }
  else if (isEmpty())
  {
    rear = front = 0;
    arr[rear] = val;
  }
  else
  {
    rear = (rear + 1) % N;
    arr[rear] = val;
  }
  itemCount++;
}

int CQueue::dequeue()
{
  int x;
  if (isEmpty())
  {
    cout << "\n\t Queue is Empty .!";
    return 0;
  }
  else if (front == rear)
  {
    x = arr[front];
    arr[front] = 0;
    rear = front = -1;
    itemCount--;
    return x;
  }
  else
  {
    x = arr[front];
    arr[front] = 0;
    front = (front + 1) % N;
    itemCount--;
    return x;
  }
}

int CQueue::count()
{
  return itemCount;
}

int CQueue::peek(int pos)
{
  if (isEmpty())
  {
    cout << "\n\t Queue Underflow ! ";
    return 0;
  }
  else
  {
    return arr[pos];
  }
}

void CQueue::change(int pos, int val)
{
  arr[pos] = val;
  cout << "\n\t Value Changed at location " << pos << endl;
}

void CQueue::display()
{
  cout << "\n\t All Values of Queue Are : " << endl;
  for (int i = N - 1; i >= 0; i--)
  {
    cout << "\t " << arr[i] << endl;
  }
}
