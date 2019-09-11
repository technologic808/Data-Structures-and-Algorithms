#include"Node.h"

// T data;
// Node* next;

// Default Constructor
template <class T>
Node<T>::Node():next(nullptr){
	
}

// Get Data
template <class T>
T Node<T>::getData(){
	return data;
}

// Set Data
template <class T>
void Node<T>::setData(T _data){
	data = _data;
}

// Get Next
template <class T>
Node<T>* Node<T>::getNext(){
	return next;
}

// Set Next 
template <class T>
void Node<T>::setNext(Node<T>* _next){
	next = _next;
}

template class Node<int>;

