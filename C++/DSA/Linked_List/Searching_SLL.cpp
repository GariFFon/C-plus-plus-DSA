//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//
////In Linked List we Cannot perform Binary Search because we cannot directly go to the middle node...
//            //We must traverse throught the Linked list to reach to middle node....
//
//struct Node
//{
//    int data;
//    Node * next;
//};
//
//void Search(Node * head , int target)
//{
//    Node * temp= head;
//    
//    int c=0;
//    while(temp!=NULL)
//    {
//        if(temp->data == target)
//        {
//            cout<<"Found The target Element..!! = "<<temp->data<<endl;
//            cout<<"The address of Node is: "<<temp<<endl;
//            c++;
//        }
//        temp=temp->next;
//    }
//    if(c == 0)
//    {
//        cout<<"Didn't Found The Target..!!"<<endl;
//    }
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    while(temp!=NULL)
//    {
//        cout<<temp->data<<"-> ";
//        temp=temp->next;
//    }
//    cout<<"NULL"<<endl;
//}
//
//int main7()
//{
//    Node * head =nullptr;
//    Node * current = nullptr;
//    int arr[]={10,20,30,40,50};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    
//    for(int i=0;i<size;i++)
//    {
//        Node * temp= new Node(arr[i]);
//        if(head == nullptr)
//        {
//            head=temp;
//            current=head;
//        }
//        else
//        {
//            current->next=temp;
//            current = temp;
//        }
//    }
//    
//    Display(head);
//    Search(head,50);
//    Search(head,70);
//    return 0;
//}
