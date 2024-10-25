#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        std::cout << value << " pushed to stack\n";
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return -1; // or throw an exception
        }
        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    // Peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return -1; // or throw an exception
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free up memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << stack.pop() << " popped from stack\n";
    std::cout << "Top element is " << stack.peek() << "\n";

    return 0;
}