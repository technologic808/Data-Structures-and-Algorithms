#ifndef NODE_H_
#define NODE_H_

#include<iostream>
#include<stdexcept>

using namespace std;

template<class T>
class Node{
	private:
		Node<T>* next;
		Node<T>* prev;
		T data;
	public:
		// Constructor
		Node();

		// Destructor
		~Node();

		// Getter and Setter for Data element
		T getData();
		void setData(T);

		// Getter and Setter for next node pointer
		Node<T>* getNext();
		void setNext(Node<T>*);

		// Getter and Setter for previous node pointer
		Node<T>* getPrev();
		void setPrev(Node<T>*);
};

#endif
