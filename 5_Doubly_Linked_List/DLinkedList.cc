#include"DLinkedList.h"

template<class T>
DLinkedList<T>::DLinkedList():headptr(nullptr), tailptr(nullptr){

}

template<class T>
DLinkedList<T>::~DLinkedList(){
	Node<T>* temp = headptr;
	while (temp != nullptr){
		headptr = headptr -> getNext();
		delete temp;
		temp = headptr;
	}
}

template<class T>
bool DLinkedList<T>::isEmpty(){
	return (headptr == nullptr && tailptr == nullptr);
}

template<class T>
bool DLinkedList<T>::addAtBegin(T ele){
	// Add at the Beginning of a doubly linked list
	//
	// if empty
	// 	create node 
	// 	set data
	// 	setprev = nullptr
	// 	headptr = tailptr = node
	// 	setnext = nullptr
	//
	//
	// if one element
	// 	create node
	// 	set data
	// 	setprev = nullptr
	// 	setnext = headptr
	// 	headptr = node
	//
	// if more than one elements
	//	create node
	//	set data
	//	setprev = nullptr
	//	setnext= headptr
	//	headptr = node
	
	bool success = false;
	Node<T>* temp = new Node<T>;
	temp->setData(ele);
	temp->setPrev(nullptr);

	if(isEmpty()){
		headptr = temp;
		tailptr = temp;
		temp->setNext(nullptr);
		success = true;
	}
	else{
		temp->setNext(headptr);
		headptr -> setPrev(temp);
		headptr = temp;
		success = true;
	}
	return success;
}

template<class T>
bool DLinkedList<T>::addAtEnd(T ele){
	// To add at end of a linked list
	//
	// if empty
	// 	create node 
	// 	set data
	// 	set next as nullptr
	// 	set prev as nullptr
	// 	set tail = node
	// 	set head = node
	//
	// if one node
	// 	create node
	// 	set data
	// 	set next as nullptr
	// 	set prev as tailptr
	// 	set next of tailptr as node
	// 	set tail = node
	
	bool success = false;

	Node<T>* temp = new Node<T>;
	temp->setData(ele);
	temp->setNext(nullptr);

	// empty condition
	if(headptr == nullptr && tailptr == nullptr){
		tailptr = temp;
		headptr = temp;
		success = true;
	}

	else {
		temp -> setPrev(tailptr);
		tailptr -> setNext(temp);
		tailptr = temp;
		success = false;
	}
	return success;
}

template<class T>
T DLinkedList<T>::delFromBegin(){
	// Delete from begin
	// 
	// for empty
	// throw exception
	//
	// for one node
	// create temp pointer to node
	// get data
	// set headptr and tailptr as null
	// delete temp
	//
	// for multi node
	// create temp pointer to headptr
	// get data
	// set headptr as headptr-> getNext();
	// set prev of headptr to nullptr
	// delete temp
	//
	// return data
	
	// Check for empty 
	if(headptr == nullptr && tailptr == nullptr) throw runtime_error("No data in memory!");

	Node<T>* temp = headptr;
	T ele = temp -> getData();

	// Check for single node condition
	if (headptr == tailptr){
		headptr = nullptr;
		tailptr = nullptr;
		delete temp;
	}

	// multi node condition
	else {
		headptr = headptr -> getNext();
		headptr -> setPrev(nullptr);
		delete temp;
	}

	return ele;
}

template<class T>
T DLinkedList<T>::delFromEnd(){
	// delete from end 
	//
	// for empty
	// 	throw exception
	//
	// for single node 
	// 	create temp node as tailnode
	// 	get data
	//	headptr = nullptr
	//	tailptr = nullptr
	//	delete temp
	// 	
	// for multi node
	// 	create temp node as tailnode
	// 	get data
	// 	set tail as tail -> getPrev
	// 	set next of tail as nullptr
	// 	delete temp
	//
	// return data
	// 	
	
	// Empty node condition
	if(isEmpty()) throw runtime_error("No data in memory");
	
	Node<T>* temp = tailptr;
	T ele = tailptr->getData();

	// Single node condition
	if(headptr == tailptr){
		headptr = nullptr;
		tailptr = nullptr;
		delete temp;
		return ele;
	}

	// Multi node condition
	tailptr = tailptr -> getPrev();
	tailptr -> setNext(nullptr);
	temp ->setPrev(nullptr);
	delete temp;
	return ele;
}

template<class T>
bool DLinkedList<T>::empty(){
	Node<T>* temp = headptr;
	while (temp != nullptr){
		headptr = headptr -> getNext();
		delete temp;
		temp = headptr;
	}
	return true;
}

template<class T>
void DLinkedList<T>::display(){
	T ele;
	Node<T>* temp = headptr;
	cout << "\nDoubly Linked List :  ";
	while (temp != nullptr){
		ele = temp -> getData();
		temp = temp -> getNext();
		cout << ele << "  <---->  "; 
	}
	cout << endl;
}

template class DLinkedList<int>;
template class DLinkedList<float>;
template class DLinkedList<char>;
