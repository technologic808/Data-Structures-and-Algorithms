#include "Node.h"

// Constructor
template <class T>
Node<T>::Node() : left(nullptr), right(nullptr) {}

// Destructor
template <class T>
Node<T>::~Node() {}

// Returns the left node
template <class T>
Node<T> *Node<T>::getLeft()
{
    return left;
}

// Returns the right node
template <class T>
Node<T> *Node<T>::getRight()
{
    return right;
}

// Returns the data in the node
template <class T>
T Node<T>::getData()
{
    return data;
}

// Sets the data
template <class T>
void Node<T>::setData(T ele)
{
    data = ele;
}

// Sets the left node pointer
template <class T>
void Node<T>::setLeft(Node<T> *t)
{
    left = t;
}

// Sets the right node pointer
template <class T>
void Node<T>::setRight(Node<T> *t)
{
    right = t;
}

template class Node<int>;