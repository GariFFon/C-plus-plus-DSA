#include <iostream>
using namespace std;

int main2() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Get the size of the array
    int pos; // Position of the element to delete

    cout << "Enter the position of the element to delete (0-based index): ";
    cin >> pos;

    // Check if the position is valid
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the left to overwrite the element at position `pos`
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array (the logical size, not the actual array size)
    n--;

    // Print the updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
