//Single File Programming Question
//Problem Statement
//
//
//
//Write a program to implement a priority queue using an array-based approach.
//
//
//
//The priority queue should support the following operations: insert an element into the priority queue with a specified priority, remove the element with the highest priority from the priority queue, and print the elements in the order of their priorities.
//
//
//
//Company Tags: Wipro
//
//Input format :
//The first line of input consists of an integer N, representing the number of elements to be inserted into the priority queue.
//
//This is followed by N lines, each containing two space-separated integers: element and priority. 1 has the highest priority.
//
//Output format :
//The first line of output prints the initial state of the priority queue after inserting all the elements, based on priority.
//
//The second line prints the state of the priority queue after performing the dequeue operation.
//
//
//
//Refer to the sample output for the exact text and format.
//
//Code constraints :
//The priority queue can store up to 100 elements (MAX_SIZE = 100).
//
//Sample test cases :
//Input 1 :
//5
//4 2
//3 1
//6 4
//2 3
//1 5
//Output 1 :
//Priority Queue: 3 4 2 6 1
//Priority Queue: 4 2 6 1
//Input 2 :
//3
//9 1
//2 2
//7 3
//Output 2 :
//Priority Queue: 9 2 7
//Priority Queue: 2 7

//ANSWER

//WAY 1
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int main() {
//    int size, k;
//    
//    // Read the number of elements and number of queues
//    cin >> size;
//    
//    // Create an array of priority queues (min-heap)
//    priority_queue<int, vector<int>, greater<int>> Q[100]; // Min-priority queues
//    
//    // Read the elements and insert them into the respective queues
//    for (int i = 0; i < size; i++) {
//        int num, Qnum;
//        cin >> num >> Qnum;
//        Q[Qnum].push(num);
//    }
//    
//    // Print the initial state of each queue (after insertion)
//    cout << "Priority Queue: ";
//    for (int j = 0; j < 100; j++) {
//        // Check if the queue is non-empty
//        if (!Q[j].empty()) {
//            priority_queue<int, vector<int>, greater<int>> temp = Q[j];
//            // Print all elements of the current queue
//            while (!temp.empty()) {
//                cout << temp.top() << " ";
//                temp.pop();
//            }
//        }
//    }
//    
//    cout << endl;
//    
//    // Dequeue one element from each queue and print the remaining state
//    cout << "Priority Queue: ";
//    for (int j = 0; j < 100; j++) {
//        // Check if the queue is non-empty
//        if (!Q[j].empty()) {
//            // Remove the top element
//            Q[j].pop();
//            // Print the remaining elements
//            while (!Q[j].empty()) {
//                cout << Q[j].top() << " ";
//                Q[j].pop();
//            }
//        }
//    }
//    
//    return 0;
//}

//WAY 2
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Create a priority queue (min-heap)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    
    int N; // Number of elements
    cin >> N;

    // Input elements with priorities and insert them into the priority queue
    for (int i = 0; i < N; i++) {
        int element, priority;
        cin >> element >> priority;
        // Push the element with its priority into the min-heap
        minHeap.push({priority, element});
    }

    // Display the initial state of the priority queue
    cout << "Priority Queue: ";
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> temp = minHeap;
    while (!temp.empty()) {
        cout << temp.top().second << " "; // Print element based on priority
        temp.pop();
    }
    cout << endl;

    // Perform dequeue (removing the element with the highest priority)
    if (!minHeap.empty()) {
        minHeap.pop(); // Remove the element with the smallest priority
    }

    // Display the state of the priority queue after dequeue
    cout << "Priority Queue: ";
    while (!minHeap.empty()) {
        cout << minHeap.top().second << " "; // Print remaining elements based on priority
        minHeap.pop();
    }
    cout << endl;

    return 0;
}

