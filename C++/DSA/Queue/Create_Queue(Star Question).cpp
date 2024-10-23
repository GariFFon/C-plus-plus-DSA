////Single File Programming Question
////Problem Statement
////
////
////
////You are tasked with implementing a program to simulate multiple queues using linked lists. The program should allow enqueue and dequeue operations on the queues and display the contents of each queue.
////
////
////
////The program should prompt the user for the number of queues (k) and the total number of customers (n). Then, for each customer, the program should prompt for the item and the queue number the customer wants to join.
////
////
////
////After enqueuing all the customers, the program should print the contents of each queue in order, indicating the queue number and the items in each queue.
////
////Input format :
////The input begins with two integers k and n separated by a newline character.
////
////Then, n lines follow, each containing two integers: item and queueNumber, separated by space.
////
////Output format :
////The output consists of k lines.
////
////Each line represents a queue and contains the elements in that queue after dequeuing, separated by space.
////
////
////
////Refer to the sample output for the exact text and format.
////
////Code constraints :
////In this scenario, the test cases fall under the following constraints:
////
////1 ≤ n, k ≤ 20
////
////1 ≤ item ≤ 100
////
////Sample test cases :
////Input 1 :
////2
////5
////1 0
////2 1
////3 0
////4 1
////5 0
////Output 1 :
////Queue 0: 1 3 5
////Queue 1: 2 4
////Input 2 :
////3
////8
////10 2
////20 1
////30 0
////40 2
////50 1
////60 0
////70 2
////80 0
////Output 2 :
////Queue 0: 30 60 80
////Queue 1: 20 50
////Queue 2: 10 40 70
//
////ANSWER
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//    int k, n;
//    
//    // Reading the number of queues (k) and the number of customers (n)
//    cin >> k >> n;
//
//    // Array of queues to store the multiple queues
//    queue<int> queues[k];
//
//    // Reading each customer's item and the queue number they want to join
//    for (int i = 0; i < n; ++i) {
//        int item, queueNumber;
//        cin >> item >> queueNumber;
//        queues[queueNumber].push(item); // Enqueue item to the specific queue
//    }
//
//    // Display the contents of each queue
//    for (int i = 0; i < k; ++i) {
//        cout << "Queue " << i << ": ";
//        // Display all elements of the queue
//        while (!queues[i].empty()) {
//            cout << queues[i].front() << " ";
//            queues[i].pop();
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//
//
//
