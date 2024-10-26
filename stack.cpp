#include <bits/stdc++.h>

using namespace std;

class Stack
{
private:
    int *data;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        data = new int[size];
        top = -1;
    }

    ~Stack()
    {
        delete[] data;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        data[top] = val;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int val = data[top];
        top--;
        return val;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return data[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getSize()
    {
        return top + 1;
    }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.print();

    return 0;
}
