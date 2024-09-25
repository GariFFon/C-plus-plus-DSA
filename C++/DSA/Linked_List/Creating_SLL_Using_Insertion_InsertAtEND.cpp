//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node * next;
//};
//
//Node * createNode(int value)
//{
//    Node * t = new Node;
//    t->data= value;
//    t->next= NULL;
//    return t;
//}
//
//void InsertAtBegin(Node *& head,int value)
//{
//    Node * temp= createNode(value);
//    if(head == nullptr)
//    {
//        head = temp;
//    }
//    else
//    {
//        temp->next = head ;
//        head = temp;
//    }
//}

//void InsertAtEnd(Node *& head , int value)
//{
//    Node * newNode1 = createNode(value);
//    Node * last = head;
//    if (head == NULL)
//    {
//        head = newNode1;
//        return;
//    }
//    while (last->next != NULL)
//    {
//        last = last -> next;
//    }
//    last -> next = newNode1;
//}

//void Insertion(Node *& head, int pos, int value)
//{
//    Node * t = createNode(value);
//    Node * temp = head;
//    if( pos == 0)
//    {
//        t->next = head;
//        head = t;
//    }
//    else if(pos > 0)
//    {
//        for(int i=0;i<pos - 1 && temp != NULL ; i++)
//        {
//            temp = temp -> next;
//        }
//        if(temp)
//        {
//            t -> next = temp -> next;
//            temp ->next = t;
//        }
//    }
//}
//
//void count(Node * head)
//{
//    Node * temp2 = head;
//    int count =0;
//    while(temp2!=NULL)
//    {
//        count++;
//        temp2=temp2->next;
//    }
//    cout<<"Total Nodes: "<<count<<endl;
//}
//
//void Display(Node * head)
//{
//    Node * temp =head;
//    while(temp!=NULL)
//    {
//        cout<<temp->data<<"->";
//        temp=temp->next;
//    }
//    cout<<"NULL"<<endl;
//}
//int main10()
//{
//    Node * head=nullptr;
//    
////    //Created a Linked List by Inserting at the beginning of the Linked List...
////    InsertAtBegin(head, 10);
////    InsertAtBegin(head, 5);
////    InsertAtBegin(head, 1);
////    cout<<"Linked List: ";
////    Display(head);
//    
//    //Creating a Linked List by Inserting at the last of the Linked List...
//    cout<<"Linked List: ";
//    InsertAtEnd(head, 10);
//    InsertAtEnd(head, 20);
//    InsertAtEnd(head, 30);
//    InsertAtEnd(head, 40);
//    InsertAtEnd(head, 50);
//    Display(head);
//    return 0;
//}
//
