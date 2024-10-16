#include <iostream>
#include <memory>
#include <stack>
#include <string>

using namespace std;

class Node {
public:
    int data;
    unique_ptr<Node> next;
};

class Stack {
private:
    unique_ptr<Node> top;
public:
    Stack();
    void push(int x);
    int pop();
    int peek(int index) const;
    bool isEmpty() const;
    int stackTop() const;
};

// Constructor: Initializes the top as nullptr
Stack::Stack() : top(nullptr) {}

// Pushes an element to the top of the stack
void Stack::push(int x) {
    unique_ptr<Node> t = make_unique<Node>();
    t->data = x;
    t->next = move(top);
    top = move(t);
}

// Pops the top element from the stack and returns its value
int Stack::pop() {
    if (top == nullptr) {
        throw runtime_error("Stack Underflow: Attempted to pop from an empty stack");
    }
    int x = top->data;
    top = move(top->next);
    return x;
}

// Peeks at the element at the given index (1-based) without popping
int Stack::peek(int index) const {
    if (isEmpty()) {
        throw runtime_error("Stack is empty");
    }
    
    Node* p = top.get();
    for (int i = 0; p != nullptr && i < index - 1; i++) {
        p = p->next.get();
    }
    if (p != nullptr) {
        return p->data;
    }
    throw out_of_range("Invalid index");
}

// Checks if the stack is empty
bool Stack::isEmpty() const {
    return top == nullptr;
}

// Returns the top element of the stack without popping it
int Stack::stackTop() const {
    if (top == nullptr) {
        throw runtime_error("Stack is empty");
    }
    return top->data;
}

// Determines whether the character is an operand (a digit)
bool isOperand(char x) {
    return isdigit(x);
}

// Performs the appropriate arithmetic operation based on the operator
int operation(char op, int x, int y) {
    switch (op) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': if (y == 0) throw runtime_error("Division by zero"); return x / y;
        default: throw invalid_argument("Invalid operator");
    }
}

// Evaluates the postfix expression using a custom stack
int Evaluate(const string& postfix) {
    Stack stk;
    int x, y, result;
    for (char ch : postfix) {
        if (isOperand(ch)) {
            stk.push(ch - '0');
        } else {
            y = stk.pop();
            x = stk.pop();
            result = operation(ch, x, y);
            stk.push(result);
        }
    }
    return stk.pop();
}

// Evaluates the postfix expression using the STL stack
int postfixEvaluate(const string& postfix) {
    stack<int> stk;
    int x, y, result;
    for (char ch : postfix) {
        if (isOperand(ch)) {
            stk.push(ch - '0');
        } else {
            y = stk.top(); stk.pop();
            x = stk.top(); stk.pop();
            result = operation(ch, x, y);
            stk.push(result);
        }
    }
    return stk.top();
}

int main() {
    string postfix = "35*62/+4-";

    try
    {
        cout << "Using custom stack: " << Evaluate(postfix) << endl;
        cout << "Using STL stack: " << postfixEvaluate(postfix) << endl;
    }
    catch (const exception& e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
