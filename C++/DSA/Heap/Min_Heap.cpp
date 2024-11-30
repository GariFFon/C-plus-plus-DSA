#include<iostream>
using namespace std;

#define MAX 5
int heap[MAX];
int heapsize = 0;

//  Function to insert element in the heap
void insert(int value){
    if(heapsize >= MAX){
        cout << "Heap is full..!!" << endl;
    }

    // Insert the new element at the end of the heap
    heap[heapsize] = value;
    int current = heapsize;
    heapsize++;

    //  Heapify the elements
    while(current > 0 && heap[(current-1)/2] > heap[current]){
        //  Swap child with parent
        int temp = heap[(current-1)/2];
        heap[(current-1)/2] = heap[current];
        heap[current] = temp;

        //  Move upto the parent
        current = (current-1)/2;
    }
}

//  Function to delete & return node from the HEAP
int deletion(){
    if(heapsize <= 0){
        cout << "Heap is Empty..!!" << endl;
        return -1;
    }

    int max = heap[0];
    heap[0] = heap[heapsize - 1];
    heapsize--;

    int current = 0;
    //  Heapify the elements downwards
    while(current*2+1 < heapsize){
        int left = current*2+1;
        int right = current*2+2;
        int minChild = left;

        if(right < heapsize && heap[right] < heap[left]){
            minChild = right;
        }

        if(heap[current] <= heap[minChild]){
            break;
        }

        //  Swap the current element with larger child
        int temp = heap[current];
        heap[current] = heap[minChild];
        heap[minChild] = temp;

        current = minChild;
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





//#include <iostream>
//using namespace std;
//
//void swap(int &a,int &b)
//{
//    int temp = a;
//    a=b;
//    b=temp;
//}
//void minHeap(int heap[],int size,int i)
//{
//    int smallest = i;
//    int left = 2*i + 1;
//    int right = 2*i + 2;
//    
//    if(left < size && heap[left] < heap[smallest])
//    {
//        smallest = left;
//    }
//    if(right < size && heap[right]<heap[smallest])
//    {
//        smallest = right;
//    }
//    
//    if(smallest != i)
//    {
//        swap(heap[i],heap[smallest]);
//        minHeap(heap,size,smallest);
//    }
//}
//void Insert(int heap[],int &size,int value)
//{
//    heap[size]=value;
//    int current = size;
//    size++;
//    
//    while(current > 0 && heap[(current-1)/2] > heap[current])
//    {
//        swap(heap[(current - 1)/2],heap[current]);
//        current = (current - 1)/2;
//    }
//}
//void buildHeap(int heap[],int size)
//{
//    for(int i=size/2 - 1 ; i>=0;i--)
//    {
//        minHeap(heap,size,i);
//    }
//}
//
//void PrintHeap(int heap[],int size)
//{
//    for(int i=0;i<size;i++)
//    {
//        cout<<heap[i]<<" ";
//    }
//}
//int main()
//{
//    int size;cin>>size;
//    int heap[size];
//    int currentsize=0;
//    for(int i=0;i<size;i++)
//    {
//        int z;
//        cin>>z;
//        Insert(heap,currentsize,z);
//    }
//    
//    buildHeap(heap,currentsize);
//    PrintHeap(heap,currentsize);
//    
//    return 0;
//}
