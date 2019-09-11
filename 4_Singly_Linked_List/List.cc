// A linked list object would 
// 1. Count variable to store the number of elements
// 2. Constructor to create a linked list and assign memory dynamically
// 3. headptr and tailptr to track the heal and tail nodes of the list
// 4. access to methods like add/deleteAtEnd/Beginning/Position()
// 5. would be able to create nodes link them 	


#include"List.h"



// Default Constructor
template <class T>
List<T>::List(){
	
}

// Destructor
template<class T>
List<T>::~List(){
	
}

// Adds at Beginning of list 
template <class T>
void List<T>::addAtBegin(T ele){
	
	// Create node
	Node<T>* temp = new Node<T>;
	
	// Set data
	temp->setData(ele);
	
	//if list is empty
	//	create temp node
	//	set data of temp
	//	setnext of temp as nullptr
	//	set headptr and tailptr as temp
	//else if list is not empty
	//	create node
	//	set data
	//	setnext of temp as headptr
	//	set headptr as temp
	
	if(!isEmpty()){	
		// Setnext of new node to current head
		temp->setNext(headptr);

		// Headpointer should point to new node
		headptr = temp;
	}

	else{
		headptr = temp;
		tailptr = temp;
		temp->setNext(nullptr);
	}
	count++;
}

// Check if there are no elements in the list
template <class T>
bool List<T>::isEmpty(){
	return (headptr == nullptr && tailptr == nullptr );                       
}

// Adds at End of List
template <class T>
void List<T>::addAtEnd(T){

}

// Deletes from the Beginning of the list
template <class T>
T List<T>::delFromBegin(){

}

// Deletes from the End of the list
template <class T>
T List<T>::delFromEnd(){

}

// Display the linked list
template <class T>
void List<T>::display(){
	// Create temp pointer to traverse the list
	// set temp as headptr
	// Traverse list till getNext of element is nullptr
	// print value and fillers
	//
	// 
	Node<T>* temp = headptr;
	cout << "\nSingly Linked List\n\n";
	for (int i = 0; i < count; i++){
		cout << " " << temp->getData() << " ---> ";
		temp = (temp->getNext());
	}
	cout <<endl;
}

// Reverse the linked list
template <class T>
void List<T>::reverse(){

}

// Empties the linked List
template <class T>
void List<T>::empty(){
	
}

// Inserts element at the specified position
template <class T>
void insertAt(){
	
}

template class List<int>;
