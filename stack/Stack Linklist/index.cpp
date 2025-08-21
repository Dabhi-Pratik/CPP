#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{

private:
    Node *top;
    int count;

public:
    Stack()
    {
        top = nullptr;
        count = 0;
    }

    void Push(int value)
    {

        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        count++;

        cout << value << " Node is Added In Stack " << endl;
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty......!" << endl;
            return;
        }

        Node *temp = top;
        top = temp->next;
        delete temp;
        count--;
    }

    void size()
    {
        cout << "Total Element in Stack is " << count << endl;
    }

    void peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty......!" << endl;
            return;
        }
        else{
            cout<<"The Top Element is "<<top->data << endl;
        }
    }
};

int main()
{
   
    Stack s;

    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
   
    s.size();

    s.pop();
    s.peek();


    return 0;
}