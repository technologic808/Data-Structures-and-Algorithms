#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

#define SIZE 5

template<class T>
class Stack{
	private:
		int tos;
		T arr[SIZE];
	public:
		// Default Constructor
		Stack();

		// Checks if stack is empty 
		bool isEmpty();

		// Checks if stack is full
		bool isFull();

		// Reads and returns the top of the stack
		T peep();

		// Removes and returns the top element of the stack
		T pop();

		// Pushes an element to top of Stack
		void push(T element);

		// Empties the stack
		void empty();

};

template class Stack<int>;
template class Stack<float>;
template class Stack<char>;
template class Stack<double>;
template class Stack<long>;
template class Stack<bool>;

#endif
