#include <iostream>
using namespace std;
class Stack
{
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {} // Constructor to initialize an empty stack

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    // Function to push an element onto the stack
    void push(int value)
    {
        if (isFull())
        {
            std::cout << "Stack overflow! Cannot push " << value << ".\n";
            return;
        }

        arr[++top] = value;
        std::cout << value << " pushed onto the stack.\n";
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (isEmpty())
        {
            std::cout << "Stack underflow! Cannot pop from an empty stack.\n";
            return;
        }

        int poppedValue = arr[top--];
        std::cout << poppedValue << " popped from the stack.\n";
    }

    // Function to get the top element of the stack without removing it
    int peek()
    {
        if (isEmpty())
        {
            std::cout << "Stack is empty.\n";
            return -1; // Return a special value indicating an empty stack
        }

        return arr[top];
    }
};

int main()
{
    Stack myStack;
    int n;
    cout << "Enter The Number OF Elements You Wanna Enter In Ur Stack:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        myStack.push(i);
    }

    return 0;
}
