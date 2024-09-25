//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
////First Initializing Head as a NULL pointer and asigning elements of array by creating them as new node ...
//
//struct Node
//{
//    int data;
//    struct Node * next;
//    
//    Node(int value){
//        data=value;
//        next=nullptr;
//    }
//};
//
//void countNode(Node * head)
//{
//    Node *temp=head;
//    int count =0;
//    while(temp!=NULL)
//    {
//        count++;
//        temp=temp->next;
//    }
//    cout<<"Total Number of Nodes: "<<count<<endl;
//}
//
//void Sum_Of_Elements(Node * head)
//{
//    Node *temp=head;
//    int sum =0;
//    while(temp!=NULL)
//    {
//        sum += temp->data;
//        temp=temp->next;
//    }
//    cout<<"Overall Sum: "<<sum<<endl;
//}
//
//void Display(Node* head)
//{
//    Node *temp=head;
//    while(temp!=NULL)
//    {
//        cout<<temp->data<<"->";
//        temp=temp->next;
//    }
//    cout<<"NULL"<<endl;
//}
//
//
//int main5()
//{
//    Node * head = nullptr;
//    Node * current = nullptr;
//    
//    int arr[]={10,20,30,40,50};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    
//    for(int i=0;i<size;i++)
//    {
//        Node * temp = new Node(arr[i]);
//        if(head==nullptr)
//        {
//            head = temp;
//            current = head;
//        }
//        else
//        {
//            current -> next = temp;
//            current = temp;
//        }
//    }
//    Display(head);
//    countNode(head);
//    Sum_Of_Elements(head);
//    return 0;
//}
//
//
//
