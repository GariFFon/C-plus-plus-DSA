//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node * next;
//};
//
//Node * create(int value)
//{
//    Node * newnode = new Node ;
//    newnode -> data = value;
//    newnode -> next = nullptr;
//    return newnode;
//}
//
//Node * CreateLL(int arr[], int size , Node *& head)
//{
//    Node * current = nullptr;
//    
//    for( int i=0; i<size ; i++)
//    {
//        Node * temp = create(arr[i]);
//        if( head == nullptr)
//        {
//            head = temp;
//            current = head;
//        }
//        else
//        {
//            current -> next = temp ;
//            current  = temp;
//        }
//    }
//    current -> next = head;
//    return head;
//}
//
//Node * insertBegin(Node* header, int val){
//    Node * node =create(val);
//    if(header-> next == nullptr){
//        header-> next = node;
//        node-> next = header;
//        header-> data++;
//        return header;
//    }
//    
//    node-> next = header-> next;
//    header-> next = node;
//    header-> data++;
//    return header;
//}
//
//Node * insertLast(Node* header, int val){
//    Node * node = create(val);
//    if(header-> next == nullptr){
//        return insertBegin(header, val);
//    }
//    Node* temp = header-> next;
//    while(temp-> next != header){
//        temp = temp-> next;
//    }
//    node-> next = temp->next;
//    temp-> next = node;
//    header-> data++;
//    return header;
//}
//
//Node * insert(Node * header, int val, int index){
//    if(index == 1){
//        return insertBegin(header, val);
//    }
//    if(index == (header-> data)+1){
//        return insertLast(header, val);
//    }
//    
//    Node * node = create(val);
//    Node * prev = header-> next;
//    for(int i= 1; i< index-1;i++){
//        prev = prev-> next;
//    }
//    node-> next = prev->next;
//    prev-> next = node;
//    header-> data++;
//    return header;
//}
//
//void Display(Node * head)
//{
//    Node * temp = head ;
//    do {
//        cout<<temp-> data <<" -> ";
//        temp = temp -> next;
//    } while (temp != head);
//    
//    cout<<"NULL"<<endl;
//}
//
//int main()
//{
//    Node * head = nullptr;
//    
//    int arr[]={10,20,30,40,50};
//    int size = sizeof( arr )/sizeof( arr[0] );
//    
//    CreateLL(arr, size, head);
//    cout<<"Linked List : ";
//    Display(head);
//    
//    insert(head, 5, 4);
//    cout<<"Updated LL: ";
//    Display(head);
//    return 0;
//}


//IN The Above Code THere is a Mistake Run it... Find it... and solve it yourself...


//CORRECT CODE

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Function to create a new node
Node* create(int value)
{
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}

// Function to create a circular linked list
Node* CreateLL(int arr[], int size, Node*& head)
{
    Node* current = nullptr;
    
    for (int i = 0; i < size; i++)
    {
        Node* temp = create(arr[i]);
        if (head == nullptr)
        {
            head = temp;
            current = head;
        }
        else
        {
            current->next = temp;
            current = temp;
        }
    }
    current->next = head; // Make it circular by pointing the last node to head
    return head;
}

// Function to insert at the beginning of the circular linked list
Node* insertBegin(Node* head, int val)
{
    Node* node = create(val);
    if (head == nullptr)
    {
        node->next = node;
        return node;
    }
    
    // Inserting node after the head but maintaining head's data
    node->next = head->next;
    head->next = node;
    return head;
}

// Function to insert at the end of the circular linked list
Node* insertLast(Node* head, int val)
{
    if (head == nullptr)
    {
        return insertBegin(head, val);
    }

    Node* node = create(val);
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node->next = head; // The last node points to head in a circular list
    temp->next = node;
    return head;
}

// Function to insert at a specific index in the circular linked list
Node* insert(Node* head, int val, int index)
{
    if (index == 1)
    {
        return insertBegin(head, val);
    }

    Node* node = create(val);
    Node* prev = head;
    for (int i = 1; i < index - 1; i++)
    {
        prev = prev->next;
    }
    node->next = prev->next;
    prev->next = node;
    return head;
}

// Function to display the circular linked list
void Display(Node* head)
{
    if (head == nullptr) return; // Check if the list is empty
    
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl; // Null to indicate the end of display
}

int main()
{
    Node* head = nullptr;

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create the circular linked list
    CreateLL(arr, size, head);
    cout << "Linked List: ";
    Display(head);

    // Insert a value at the 4th position
    insert(head, 5, 4);
    cout << "Updated LL: ";
    Display(head);

    return 0;
}

