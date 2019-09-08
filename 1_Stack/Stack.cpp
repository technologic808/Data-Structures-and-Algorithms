#include "Stack.h"

// Default constructor
template<class T>
Stack<T>::Stack()
	:tos(-1){	
	}

// Returns true if the stack is empty
template<class T>
bool Stack<T>::isEmpty() {
	return(tos == -1);
}

// Returns true if the stack is full
template<class T>
bool Stack<T>::isFull() {
	return(tos == SIZE-1);
}

// Returns an element from the top of the stack without removing it if the stack is not empty
template<class T>
T Stack<T>::peep(){
	if(isEmpty()) throw runtime_error("Stack Underflow");
	return arr[tos];
}

// Removes and returns an element from the top of stack if the stack is not empty
template<class T>
T Stack<T>::pop(){	
	if(isEmpty()) throw runtime_error("Stack Underflow");
	return (arr[tos--]);
}

// Adds the element to the stack if the stack is not full
template<class T>
void Stack<T>::push(T element){
	if(isFull()) throw runtime_error("Stack Overflow");
	arr[++tos] = element;
}

// Iterates through the stack and pops the elements
template<class T>
void Stack<T>::empty(){
	for (int i = tos; i >= 0; i--){
		pop();
	} 
}




