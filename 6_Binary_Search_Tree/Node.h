#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <stdexcept>

using namespace std;

template <class T>
class Node
{
private:
    Node<T> *left;
    Node<T> *right;
    T data;

public:
    // Constructor and Destructor
    Node();
    ~Node();

    // getter funtions
    Node<T> *getLeft();
    Node<T> *getRight();
    T getData();

    //setter functions
    void setLeft(Node<T> *);
    void setRight(Node<T> *);
    void setData(T ele);
};

#endif