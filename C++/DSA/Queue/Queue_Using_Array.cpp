//#include <iostream>
//using namespace std;
//
//class Queue {
//private:
//    int front;
//    int rear;
//    int capacity;
//    int* arr;
//    
//public:
//    Queue(int size)
//    {
//        front = -1;
//        rear = -1;
//        capacity = size;
//        arr = new int[capacity];
//    }
//
//    ~Queue()
//    {
//        delete[] arr;
//    }
//
//    bool isFull()
//    {
//        return rear == capacity - 1;
//    }
//
//    bool isEmpty()
//    {
//        return front == -1 || front > rear;
//    }
//
//    void enqueue(int x)
//    {
//        
//        if (isFull())
//        {
//            cout << "Queue is full... Queue Overflow!" << endl;
//        }
//        else
//        {
//            if (front == -1)
//            {
//                front = 0;  // Set front to 0 when adding the first element
//            }
//            rear++;
//            arr[rear] = x;
//            cout << "Enqueued " << x << endl;
//        }
//    }
//
//    int dequeue()
//    {
//        int x = -1;
//        
//        if (isEmpty())
//        {
//            cout << "Queue is empty... Queue Underflow!" << endl;
//        }
//        else
//        {
//            x = arr[front];
//            front++;
//            if (front > rear) {  // Reset queue when it's empty after dequeue
//                front = rear = -1;
//            }
//        }
//        return x;
//    }
//
//    int getFront()
//    {
//        if (!isEmpty())
//        {
//            return arr[front];
//        }
//        return -1;
//    }
//
//    int size()
//    {
//        if (isEmpty())
//        {
//            return 0;
//        }
//        return rear - front + 1;
//    }
//
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty!" << endl;
//        }
//        else
//        {
//            for (int i = front; i <= rear; i++)
//            {
//                cout << arr[i] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main()
//{
//    Queue q(5);
//
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//    q.enqueue(40);
//
//    q.display();
//    // Output: 10 20 30 40
//
//    cout << "Dequeued: " << q.dequeue() << endl;
//    // Output: Dequeued: 10
//
//    q.display();
//    // Output: 20 30 40
//
//    q.enqueue(50);
//
//    q.display();
//    // Output: 20 30 40 50
//
//    cout << "Front element: " << q.getFront() << endl;
//    // Output: Front element: 20
//
//    cout << "Queue size: " << q.size() << endl;
//    // Output: Queue size: 4
//
//    return 0;
//}
//
