
//Question to Search in Binary Search Tree for any factorial present if yes then the very first factorial should be print as an output.

#include <iostream>
using namespace std;

bool Fact_Check(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;

        if (fact > num)
        {
            return false;
        }
        if (fact == num)
        {
            return true;
        }
    }
    return false;
}

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

class BST
{
public:
    Node* root;

    BST()
    {
        root = nullptr;
    }

    Node* Insert(Node* root, int val)
    {
        if (root == nullptr)
        {
            return new Node(val);
        }

        if (val < root->data)
        {
            root->left = Insert(root->left, val);
        }
        else
        {
            root->right = Insert(root->right, val);
        }

        return root;
    }

    bool Search(Node* root, int &Factorial_Found)
    {
        if (root == nullptr)
        {
            return false;
        }

        if (Fact_Check(root->data))
        {
            Factorial_Found = root->data;
            return true;
        }
        return Search(root->left, Factorial_Found) || Search(root->right, Factorial_Found);
    }

    void Inorder(Node* root)
    {
        if (root == nullptr)
        {
            return;
        }

        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }

    int count(Node* root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        return 1 + count(root->left) + count(root->right);
    }
};

int main()
{
    BST bst;
    int num;

    cout << "Enter numbers to insert into the BST (enter -1 to stop): ";
    while (cin >> num && num != -1)
    {
        bst.root = bst.Insert(bst.root, num);
    }

    cout << "Inorder Traversal: ";
    bst.Inorder(bst.root);
    cout << endl;

    cout << "Total Number of nodes: " << bst.count(bst.root) << endl;

    int foundFactorial = 0;
    bool check_For_AnyFactorial_in_bst = bst.Search(bst.root, foundFactorial);
    
    if (check_For_AnyFactorial_in_bst)
    {
        cout << "Yes, found a factorial in the BST: " << foundFactorial << endl;
    }
    else
    {
        cout << "Factorial not found." << endl;
    }
    return 0;
}
