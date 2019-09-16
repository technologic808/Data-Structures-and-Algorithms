#ifndef DLINKEDLIST_H_
#define DLINKEDLIST_H_

#include"Node.h"

template<class T>
class DLinkedList{
	private:
		
	public:
		// doubly linked list will implement
		//
		// constructor
		// destructor
		// addAtBegin
		// addAtEnd
		// delFromBegin
		// delFromEnd
		// empty
		// display
		
		DLinkedList();
		~DLinkedList();
		bool addAtBegin(T);
		bool addAtEnd(T);
		T delFromBegin();
		T delFromEnd();
		bool empty();
		void display();
		
};

#endif
