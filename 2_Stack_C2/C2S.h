#ifndef C2S_H_
#define C2S_H_

#include<iostream>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

template <class T>
class C2S{
	private:
		int size0;
		int size1;
		int tos0;
		int tos1;
		T* arr;
	public:
		// Default Constructor
		C2S();

		// Parametrized Constructor
		C2S(int, int);

		// Destructor
		~C2S();

		// Checks if stack is empty
		bool isEmpty(int);

		// Checks if stack is full
		bool isFull(int);	

		// Reads and returns the element on top of stack	
		T peep(int);		

		// Adds an element to the top of the stack
		bool push(int, T);

		// Removes and returns the element on top of stack
		T pop(int);		
};


template class C2S<int>;
template class C2S<float>;
template class C2S<char>;
template class C2S<double>;
template class C2S<long>;
template class C2S<bool>;

#endif
