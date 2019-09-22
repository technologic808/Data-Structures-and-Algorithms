#include "BST.h"

// Default Constructor
template <class T>
BST<T>::BST() : root(nullptr) {}

// Destructor
template <class T>
BST<T>::~BST()
{
    deleteTree(root);
}

// Gets the root node of the BST
template <class T>
Node<T> *BST<T>::getRoot()
{
    return root;
}

// Inserts new element in BST
template <class T>
void BST<T>::insert(T ele)
{
    // Creates node and sets data
    Node<T> *temp = new Node<T>;
    temp->setData(ele);
    temp->setLeft(nullptr);
    temp->setRight(nullptr);

    if (root == nullptr)
    {
        root = temp;
        return;
    }
    else
    {
        Node<T> *trav = root;
        while (trav != nullptr)
        {
            if (ele < trav->getData())
            {
                if (trav->getLeft() == nullptr)
                {
                    trav->setLeft(temp);
                    return;
                }
                else
                {
                    trav = trav->getLeft();
                }
            }
            else
            {
                if (trav->getRight() == nullptr)
                {
                    trav->setRight(temp);
                    return;
                }
                else
                {
                    trav = trav->getRight();
                }
            }
        }
    }
}

// Displays BST inorder
template <class T>
void BST<T>::inOrder(Node<T> *t)
{
    if (t != nullptr)
    {
        inOrder(t->getLeft());
        cout << t->getData() << "\n";
        inOrder(t->getRight());
    }
}

// Displays BST preorder
template <class T>
void BST<T>::preOrder(Node<T> *t)
{
    if (t != nullptr)
    {
        cout << t->getData() << "\n";
        preOrder(t->getLeft());
        preOrder(t->getRight());
    }
}

// Displays BST postorder
template <class T>
void BST<T>::postOrder(Node<T> *t)
{
    if (t != nullptr)
    {
        postOrder(t->getLeft());
        postOrder(t->getRight());
        cout << t->getData() << "\n";
    }
}

template <class T>
void BST<T>::deleteTree(Node<T> *t)
{
    Node<T> *trav = t;
    if (trav == nullptr)
    {
        return;
    }
    deleteTree(trav->getLeft());
    deleteTree(trav->getRight());
}

template <class T>
int BST<T>::heightOfTree(Node<T> *t)
{
    // To calculate height of tree
    // initialize l and r as 0
    // exit condition if t is null return 0
    // calculate height of left
    // calculate height of right
    // calculate height
    int l = 0;
    int r = 0;

    if (t == nullptr)
    {
        return 0;
    }

    l = heightOfTree(t->getLeft());
    r = heightOfTree(t->getLeft());

    if (l >= r)
    {
        return l + 1;
    }
    else
    {
        return r + 1;
    }
}

template class BST<int>;