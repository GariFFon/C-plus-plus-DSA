//
//  main.cpp
//  DSA
//
//  Created by Gourav Dash on 22/08/24.
//

//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//    int arr[5]={1,2,3,4,5};
//    int key=10;
//    int pos=3;
//    for (int i=0;i<5;i++)
//    {
//        arr[pos+1]=arr[pos];
//        arr[pos]=key;
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
//}
#include<iostream>
using namespace std;

//At the start...
//At the End...
//At any postion...

int main1() {
    int arr[100], n, element, position;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be inserted: ";
    cin >> element;

    cout << "Enter the position where the element is to be inserted (1-based index): ";
    cin >> position;

    // Shift elements to the right to make space for the new element
    for(int i = n; i >= position; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the element at the specified position
    arr[position-1] = element;

    // Increment the number of elements
    n++;

    // Output: Array after insertion
    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}





