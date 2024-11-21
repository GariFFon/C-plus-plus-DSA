//#include <iostream>
//using namespace std;
//
//void Insert(int arr[],int n)
//{
//    int temp,i=n;
//    temp = arr[i];
//    while(i>1 && temp>arr[i/2])
//    {
//        arr[i] = arr[i/2];
//        i=i/2;
//    }
//    arr[i] = temp;
//}
//void Create_Heap()
//{
//    int arr[]={0,10,20,30,25,5,40,35};
//    int n;
//    for(int i=2;i<7;i++)
//    {
//        Insert(arr,i);
//    }
//}
//void Print(int arr[],int size)
//{
//    for(int i=0;i<size;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
//int main()
//{
//    int arr[]={10,20,30,45,25};
//    Insert(arr, 10);
//    int size = sizeof(arr)/sizeof(arr[0]);
//    return 0;
//}


#include <iostream>
using namespace std;

class MaxHeap {
private:
    int* heapArray;
    int size;

public:
    MaxHeap(int* arr, int n) {
        heapArray = arr;
        size = n;
        buildHeap();
    }

    void insert(int n) {
        int i = n;
        int temp = heapArray[i];
        while (i > 1 && temp > heapArray[i / 2]) {
            heapArray[i] = heapArray[i / 2];
            i = i / 2;
        }
        heapArray[i] = temp;
    }

    int deleteMax(int n) {
        int i, j;
        int val = heapArray[1];  // Value to return
        int x = heapArray[n];    // Last element to place at root

        heapArray[1] = x;
        heapArray[n] = val;

        i = 1;
        j = i * 2;

        while (j <= n - 1) {
            if (j < n - 1 && heapArray[j + 1] > heapArray[j])
                j = j + 1;
            if (heapArray[i] < heapArray[j]) {
                swap(heapArray[i], heapArray[j]);
                i = j;
                j = 2 * j;
            } else {
                break;
            }
        }
        return val;
    }

    void buildHeap() {
        for (int i = 2; i <= size; i++)
            insert(i);
    }

    void heapSort() {
        for (int i = size; i > 1; i--)
            deleteMax(i);
    }

    void displayHeap() {
        for (int i = 1; i <= size; i++)
            cout << heapArray[i] << " ";
        cout << endl;
    }
};

int main() {
    int arr[] = {0, 14, 15, 5, 20, 30, 8, 40};  // 0-index is unused
    int n = sizeof(arr) / sizeof(arr[0]) - 1;   // Exclude 0 index in size

    MaxHeap maxHeap(arr, n);
    maxHeap.heapSort();
    maxHeap.displayHeap();

    return 0;
    
}

