// A linked list object would 
// 1. Count variable to store the number of elements
// 2. Constructor to create a linked list and assign memory dynamically
// 3. headptr and tailptr to track the heal and tail nodes of the list
// 4. access to methods like add/deleteAtEnd/Beginning/Position()
// 5. would be able to create nodes link them 	


#include"List.h"



// Default Constructor
template <class T>
List<T>::List():count(0), headptr(nullptr), tailptr(nullptr){
	
}

// Destructor
template<class T>
List<T>::~List(){
	Node<T>* temp = headptr;
	while(temp -> getNext() != nullptr){
		headptr = headptr -> getNext();
		delete temp;
		temp = headptr;
	}
}

// Adds at Beginning of list 
template <class T>
bool List<T>::addAtBegin(T ele){
	bool success = false;
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
		success = true;
	}

	else{
		headptr = temp;
		tailptr = temp;
		temp->setNext(nullptr);
		success = true;
	}
	count++;
	return success;
}

// Check if there are no elements in the list
template <class T>
bool List<T>::isEmpty(){
	return (headptr == nullptr && tailptr == nullptr );                       
}

// Adds at End of List
template <class T>
bool List<T>::addAtEnd(T ele){
	// empty condition
	// create node
	// set data
	// set next as nullptr
	//
	// set headptr and tailptr to node
	// 
	//
	// one node condition
	// create node
	// set data
	// set next as nullptr
	// 
	// setnext of tailptr as node
	// set tailptr = node
	// 
	
	bool success = false;	
	// Create node and set data and setnext as null
	Node<T>* temp = new Node<T>;
	temp->setData(ele);
	temp->setNext(nullptr);
	
	if(headptr == tailptr)

	if(isEmpty()) {
		headptr = temp;
		tailptr = temp;
		success =  true;
	}
	
	else{
		tailptr->setNext(temp);
		tailptr = temp;
		success = true;
	}
	count ++;
	return success;


}

// Deletes from the Beginning of the list
template <class T>
T List<T>::delFromBegin(){
	// empty list condition
	if(isEmpty()) throw runtime_error("No data in memory!");
	
	// single node condition
	if (headptr == tailptr){
		T ele = headptr->getData();
		Node<T>* temp = headptr;
		headptr = nullptr;
		tailptr = nullptr;
		delete temp;
		count --;
		return ele;
	}
	
	T ele = headptr->getData();
	Node<T>* temp = headptr;
	headptr = headptr->getNext();
	delete temp;
	count --;
	return ele;
}

// Deletes from the End of the list
template <class T>
T List<T>::delFromEnd(){
	// if one node
	// create temp node and set equal to tail
	// Get value of tail and store in T ele
	// headptr and tailptr = null
	// delete temp
	// return T ele
	//
	// if more than one node
	// create temp node and set equal to tailptr
	// get value of tail and store in T ele
	// Traverse to the element whose next pointer is equal to tailptr
	// set next as nullptr
	// set tail pointer as traversal pointer
	// delete temp pointer
	
	if (isEmpty()) throw runtime_error("No Data in Memory");
	
	Node<T>* temp = tailptr;
	T ele = tailptr -> getData();

	// Single node condition
	if (headptr == tailptr){
		headptr = tailptr = nullptr;
		delete temp;
		count --;
		return ele;
	}
	
	// Multi node condition
	Node<T>* trav = headptr;
	while (trav->getNext() != tailptr)
		trav = trav->getNext();
	tailptr = trav;
	tailptr->setNext(nullptr);
	delete temp;
	count --;
	return ele;

}

// Display the linked list
template <class T>
bool List<T>::display(){
	// Create temp pointer to traverse the list
	// set temp as headptr
	// Traverse list till getNext of element is nullptr
	// print value and fillers
	//
	
       	if(isEmpty()) {
		cout << "\nNo data in memory!\n";
		return false;
	}	
	Node<T>* temp = headptr;
	cout << "\nSingly Linked List\n\n";
	while(temp != nullptr){
		cout << " " << temp->getData() << " ---> ";
		temp = temp->getNext();
	}
	cout <<endl;
	return true;
}

// Reverse the linked list
template <class T>
bool List<T>::reverse(){
	// Reversal strategy 
	// Detach and flip while traversing
	//
	// detach each node from old linked list starting from head 
	// flip over to the new linked list while setting it as new head
	// move to next node
	//
	// create temp pointers temp, nhead, ntail to keep track of the two linked lists


	// create temp ptr equal to  headptr	
	// create ntail and set as headptr
	// create nhead pointer set it as headptr
	// 
	// 
	// head = head->getNext();
	// ntail->setNext(nullptr);
	// temp = head;
	//
	//
	// while(temp != nullptr)
	// 	head = head->getNext();
	//	temp->setNext(nhead);
	//	nhead = temp;
	//	temp = head;
	//
	// head = nhead
	// tail = ntail
	
	if (isEmpty()) return true;

	if (headptr == tailptr) return true;

	Node<T>* temp = headptr;
	Node<T>* nhead = headptr;
	Node<T>* ntail = headptr;

	headptr = headptr->getNext();
	ntail->setNext(nullptr);
	temp = headptr;

	while (temp != nullptr){
		headptr = headptr -> getNext();
		temp ->setNext(nhead);
		nhead = temp;
		temp = headptr;	
	}

	headptr = nhead;
	tailptr = ntail;
	return true;
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
