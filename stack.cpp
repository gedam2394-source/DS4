#include <iostream>
using namespace std;
#include <stdio.h>
#define MAX 5   // Maximum size of stack

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;   // Stack is initially empty
    }

    // Push operation
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack\n";
        }
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Stack is empty\n";
        } else {
            cout << arr[top] << " popped from stack\n";
            top--;
        }
    }

    // Peek operation
    void peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.peek();

    return 0;
}
