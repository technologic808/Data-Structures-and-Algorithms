		// A linked list object would 
		// 1. Count variable to store the number of elements
		// 2. Constructor to create a linked list and assign memory dynamically
		// 3. headptr and tailptr to track the heal and tail nodes of the list
		// 4. access to methods like add/deleteAtEnd/Beginning/Position()
		// 5. would be able to create nodes link them 	


#ifndef LIST_H_
#define LIST_H_

#include"Node.h"

template <class T>
class List : public Node<T>{
	private:
		Node<T>* headptr;
		Node<T>* tailptr;
		int count = 0;
	public:
		// Default Constructor
		List();

		// Destructor
		~List();

		// Checks if List has no elements
		bool isEmpty();

		// Adds at Beginning of list 
		bool addAtBegin(T);

		// Adds at End of List
		void addAtEnd(T);

		// Deletes from the Beginning of the list
		T delFromBegin();

		// Deletes from the End of the list
		T delFromEnd();

		// Display the linked list
		bool display();

		// Reverse the linked list
		void reverse();

		// Empty the list
		void empty();

		// Insert at position
		bool insertAt(int, T);
};

//template class List<int>;

#endif
