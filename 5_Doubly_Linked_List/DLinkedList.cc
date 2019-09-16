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
}

template<class T>
T DLinkedList<T>::delFromBegin(){

}

template<class T>
T DLinkedList<T>::delFromEnd(){

}

template<class T>
bool DLinkedList<T>::empty(){

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
