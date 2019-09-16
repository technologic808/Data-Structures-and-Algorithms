#include"Node.h"

// Node<T>* next;
// Node<T>* prev;
// T data;

// Constructor
template<class T>
Node<T>::Node():next(nullptr), prev(nullptr){}

// Destructor
template<class T>
Node<T>::~Node(){}

// Getter and Setter for Data element
template<class T>
T Node<T>::getData(){
	return data;
}

template<class T>
void Node<T>::setData(T ele){
	data = ele;
}

// Getter and Setter for next node pointer
template<class T>
Node<T>* Node<T>::getNext(){
	return next;
}

template<class T>
void Node<T>::setNext(Node<T>* temp){
	next = temp;
}

// Getter and Setter for previous node pointer
template<class T>
Node<T>* Node<T>::getPrev(){
	return prev;
}

template<class T>
void Node<T>::setPrev(Node<T>* temp){
	prev = temp;
}

template class Node<int>;
template class Node<float>;
template class Node<char>;
