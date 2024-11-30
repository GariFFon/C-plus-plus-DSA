#include<iostream>
using namespace std;

#define MAX 5
int heap[MAX];
int heapsize = 0;
void  swap(int & a,int & b)
{
    int temp = a;
    a=b;
    b=temp;
}
void insert(int value){
    if(heapsize >= MAX){
        cout << "Heap is full..!!" << endl;
    }

    heap[heapsize] = value;
    int current = heapsize;
    heapsize++;

    while(current > 0 && heap[(current-1)/2] < heap[current]){
        swap(heap[(current-1)/2],heap[current]);
        current = (current-1)/2;
    }
}

int deletion(){
    if(heapsize <= 0){
        cout << "Heap is Empty..!!" << endl;
        return -1;
    }

    int max = heap[0];
    heap[0] = heap[heapsize - 1];
    heapsize--;

    int current = 0;
    //Do heapify

    while(current*2+1 < heapsize){
        int left = current*2+1;
        int right = current*2+2;
        int maxChild = left;

        if(right < heapsize && heap[right] > heap[left]){
            maxChild = right;
        }

        if(heap[current] >= heap[maxChild]){
            break;
        }
        
        swap(heap[current],heap[maxChild]);

        current = maxChild;
    }
    return max;
}

void printHeap(){
    if(heapsize <=0){
        cout << "Heap is Empty..!!" << endl;
        return;
    }

    for(int i=0; i<heapsize; i++){
        cout << heap[i] << " ";
    }
    cout << endl;
}


int main(){

    cout << "Insertion: " << endl;
    insert(44);
    printHeap();
    
    insert(33);
    printHeap();

    insert(77);
    printHeap();

    insert(11);
    printHeap();

    insert(55);
    printHeap();

    cout << endl;

    cout << "Deleted element " << deletion() << endl;
    printHeap();
    
    cout << "Deleted element " << deletion() << endl;
    printHeap();

    cout << "Deleted element " << deletion() << endl;
    printHeap();

    cout << "Deleted element " << deletion() << endl;
    printHeap();

    cout << "Deleted element " << deletion() << endl;
    printHeap();


    return 0;
}


//// You are using GCC
//void swap(int &a, int &b) {
//    int temp = a;
//    a= b;
//    b=temp;
//}
//void maxHeapify(int arr[], int n, int i) {
//    int largest = i;
//    int left = 2*i + 1;
//    int right=2*i + 2;
//    
//    if(left < n && arr[left] > arr[largest])
//    {
//        largest = left;
//    }
//    if(right< n && arr[left] > arr[largest])
//    {
//        largest =right;
//    }
//    
//    if(largest != i)
//    {
//        swap(arr[i],arr[largest]);
//        maxHeapify(arr,n,largest);
//    }
//}
//void buildMaxHeap(int arr[], int n) {
//    for(int i=n/2 - 1 ; i>= 0 ; i--)
//    {
//        maxHeapify(arr,n,i);
//    }
//}
//void insertIntoMaxHeap(int arr[], int &n, int value) {
//    arr[n] = value;
//    int current = n;
//    n++ ;
//    
//    while(current > 0 && arr[(current - 1)/2] < arr[current])
//    {
//        swap(arr[(current - 1)/2],arr[current]);
//        current = (current - 1)/2;
//    }
//}
