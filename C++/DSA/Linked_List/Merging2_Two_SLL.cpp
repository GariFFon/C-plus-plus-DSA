//
//  Merging2_Two_SLL.cpp
//  DSA
//
//  Created by Gourav Dash on 26/09/24.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

Node * CreateNode(int value)
{
    Node * newnode = new Node;
    newnode -> data = value;
    newnode -> next = nullptr;
    return newnode;
}

Node * CreateLL(int arr[] , int size , Node *& head)
{
    Node * current = nullptr;
    
    for (int i=0 ; i < size ; i++ )
    {
        Node * temp = CreateNode(arr[i]);
        
        if( head == nullptr)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current -> next = temp;
            current = temp;
        }
    }
    return head;
}

//Here we are linking the main head... instead of giving a newpointer all the new value...
//creating a entire new Linked List... This is was done in Merge_Two_SLL.c

Node * mergeHead( Node *& head1, Node * head2)
{
    Node * first = head1;
    Node * second = head2;
    Node * third = nullptr;
    Node * last = nullptr;
    
    if( head1 == nullptr)
    {
        cout<<"The Linked list 1 is empty."<<endl;
        return 0;
    }
    if( head2 == nullptr)
    {
        cout<<"THe Linked List 2 is empty."<<endl;
        return 0;
    }
    
    //This is to assgin the Very First Value of all the pointers
    
    if( first -> data < second -> data)
    {
        third = last = first;
        first = first -> next ;
        last -> next = nullptr;
    }
    else
    {
        third = last = second;
        second = second -> next ;
        last -> next = nullptr;
    }
    
    //Now the main loop...
    
    while( first != nullptr && second != nullptr)
    {
        if( first -> data < second -> data )
        {
            last -> next = first;
            last = first;
            first = first -> next;
            last -> next = nullptr;
        }
        else
        {
            last -> next = second;
            last = second;
            second = second -> next ;
            last -> next = nullptr;
        }
    }
    
    if( first != nullptr)
    {
        last-> next = first;
    }
    else
    {
        last -> next = second;
    }
    return head1;
}

void Display(Node * head)
{
    Node * temp = head;
    while ( temp != nullptr)
    {
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node * head = nullptr;
    
    int arr[]={10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    CreateLL(arr, size, head);
    cout<<"Linked List 1: ";
    Display(head);
    
    Node * head2 = nullptr;
    
    int arr2[]={15,25,35,45,55};
    int size2= sizeof(arr2)/sizeof(arr2[0]);
    CreateLL(arr2, size2, head2);
    cout<<"Linked List 2: ";
    Display(head2);
    
    mergeHead(head, head2);
    cout<<"Merged Linked List:"<<endl;
    Display(head);
    
    return 0;
}
