#ifndef BST_H_
#define BST_H_

#include "Node.h"

template <class T>
class BST
{
private:
    Node<T> *root;

public:
    // Constructor and Destructor
    BST();
    ~BST();

    // Inserts element in BST
    void insert(T);

    // Displays elements in infix order
    static void inOrder(Node<T> * t);

    // Displays elements in prefix order
    static void preOrder(Node<T> * t);

    // Displays elements in postfix order
    static void postOrder(Node<T> * t);

    // searches if an element is availible in a BST
    bool search(T);

    // returns the height of tree
    static int heightOfTree(Node<T> *);

    // finds the minimum element in the tree
    static T findMin(Node<T> *);

    // finds the maximum size element
    static T findMax(Node<T> *);

    // deletes tree
    static void deleteTree(Node<T> *);

    // get data in node
    T getNodeData();

    // get root node of tree
    Node<T> *getRoot();
};

#endif