////
////  Selection_Sort.cpp
////  DSA
////
////  Created by Gourav Dash on 26/08/24.
////
//
//#include <iostream>
//using namespace std;
//
//void selectionSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++)
//    {
//        int minIndex = i;
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[j] < arr[minIndex])
//            {
//                minIndex = j;
//            }
//        }
//        int temp = arr[minIndex];
//        arr[minIndex] = arr[i];
//        arr[i] = temp;
//    }
//}
//
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main5() {
//    int arr[] = {64, 25, 12, 22, 11};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    
//    cout << "Unsorted array: ";
//    printArray(arr, n);
//
//    selectionSort(arr, n);
//
//    cout << "Sorted array: ";
//    printArray(arr, n);
//
//    return 0;
//}
