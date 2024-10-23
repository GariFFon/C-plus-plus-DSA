//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//};
//
//class Queue {
//private:
//    Node* front;
//    Node* rear;
//public:
//    Queue();
//    ~Queue();
//    void enqueue(int x);
//    int dequeue();
//    bool isEmpty() const;
//    bool isFull() const;
//    int QueueFront() const;
//    int QueueRear() const;
//};
//
//// Constructor: Initializes front and rear pointers as nullptr
//Queue::Queue() {
//    front = nullptr;
//    rear = nullptr;
//}
//
//// Destructor: Frees all the nodes in the queue
//Queue::~Queue() {
//    Node* temp = front;
//    while (front != nullptr) {
//        front = front->next;
//        delete temp;
//        temp = front;
//    }
//}
//
//// Adds an element at the rear of the queue
//void Queue::enqueue(int x) {
//    Node* temp = new Node();
//    if (temp == nullptr) {
//        throw runtime_error("Queue Overflow: Memory allocation failed");
//    }
//    temp->data = x;
//    temp->next = nullptr;
//
//    // If the queue is empty, both front and rear point to the new node
//    if (isEmpty()) {
//        front = rear = temp;
//    } else {
//        rear->next = temp;
//        rear = temp;
//    }
//}
//
//// Removes and returns the front element from the queue
//int Queue::dequeue() {
//    if (isEmpty()) {
//        throw runtime_error("Queue Underflow: Attempted to dequeue from an empty queue");
//    }
//
//    Node* temp = front;
//    int x = temp->data;
//    front = front->next;
//
//    // If the queue is now empty, set rear to nullptr as well
//    if (front == nullptr) {
//        rear = nullptr;
//    }
//
//    delete temp;
//    return x;
//}
//
//// Checks if the queue is empty
//bool Queue::isEmpty() const {
//    return front == nullptr;
//}
//
//// Checks if the queue is full (based on dynamic memory allocation failure)
//bool Queue::isFull() const {
//    Node* temp = new Node();
//    bool full = temp == nullptr;
//    delete temp;
//    return full;
//}
//
//// Returns the front element without removing it
//int Queue::QueueFront() const {
//    if (isEmpty()) {
//        throw runtime_error("Queue is empty");
//    }
//    return front->data;
//}
//
//// Returns the rear element without removing it
//int Queue::QueueRear() const {
//    if (isEmpty()) {
//        throw runtime_error("Queue is empty");
//    }
//    return rear->data;
//}
//
//int main2() {
//    try {
//        Queue q;
//
//        // Enqueue some elements
//        q.enqueue(10);
//        q.enqueue(20);
//        q.enqueue(30);
//
//        // Get the front and rear elements
//        cout << "Front element: " << q.QueueFront() << endl;  // Output: 10
//        cout << "Rear element: " << q.QueueRear() << endl;    // Output: 30
//
//        // Dequeue an element
//        cout << "Dequeued element: " << q.dequeue() << endl;  // Output: 10
//
//        // Get the front and rear elements again
//        cout << "Front element: " << q.QueueFront() << endl;  // Output: 20
//        cout << "Rear element: " << q.QueueRear() << endl;    // Output: 30
//
//        // Enqueue more elements
//        q.enqueue(40);
//        q.enqueue(50);
//
//        // Dequeue all elements
//        while (!q.isEmpty()) {
//            cout << "Dequeued element: " << q.dequeue() << endl;
//        }
//
//        // Attempt to dequeue from an empty queue
//        cout << q.dequeue() << endl; // This will throw an exception
//    }
//    catch (const exception& e) {
//        cerr << e.what() << endl;
//    }
//
//    return 0;
//}
