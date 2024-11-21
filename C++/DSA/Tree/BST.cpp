#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node * left;
    Node * right;
    
    Node (int value ){
        data = value ;
        left = right = nullptr;
    }
};
class BST {
public:
    Node * root;
    
    BST()
    {
        root = nullptr;
    }
    
    Node * Insert(Node * root,int val)
    {
        
        if(root == nullptr)
        {
            return new Node(val);
        }
        
        if(val < root->data)
        {
            root->left = Insert(root->left, val);
        }
        else
        {
            root->right = Insert(root->right, val);
        }
        return root;
    }
    
    bool Search(Node * root,int val)
    {
        if(root == nullptr)
        {
            return false;
        }
        if(val == root->data)
        {
            return true;
        }
        
        if(val < root->data)
        {
            return Search(root->left, val);
        }
        else
        {
            return Search(root->right,val);
        }
        
    }
    void PreOrder(Node * root)
    {
        Node * node = root;
        if(node == nullptr)
        {
            return;
        }
        cout<<node->data<<" ";
        PreOrder(node->left);
        PreOrder(node->right);
    }
    
    void InOrder(Node * root)
    {
        Node * node = root;
        if(node == nullptr)
        {
            return;
        }
        InOrder(node->left);
        cout<<node->data<<" ";
        InOrder(node->right);
    }
    
    void PostOrder(Node * root)
    {
        Node * node = root;
        if(node == nullptr)
        {
            return;
        }
        PostOrder(node->left);
        PostOrder(node->right);
        cout<<node -> data<<" ";
    }
};
int main()
{
    BST bst;
    bst.root = new Node (101);
    bst.Insert(bst.root, 102);
    bst.Insert(bst.root, 103);
    bst.Insert(bst.root, 105);
    bst.Insert(bst.root, 106);
    bst.Insert(bst.root, 108);
    bst.Insert(bst.root, 110);
    cout<<"Display Preorder: ";
    bst.PreOrder(bst.root);
    cout<<endl;
    
    cout<<"Display Inorder: ";
    bst.InOrder(bst.root);
    cout<<endl;
    int key = 102;
    bool check = bst.Search(bst.root, key);
    if(check)
    {
        cout<<"Yess"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
