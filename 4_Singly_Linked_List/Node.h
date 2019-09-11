#ifndef NODE_H_
#define NODE_H_

#include<iostream>
#include<stdexcept>

using namespace std;

template <class T>
class Node{
	private:
		T data;
		Node* next;
	public:
		// Default Constructor
		Node();

		// Get Data
		T getData();

		// Set Data
		void setData(T);

		// Get Next
		Node* getNext();

		// Set Next 
		void setNext(Node*);
		
		
};

//template class Node<int>;

#endif


