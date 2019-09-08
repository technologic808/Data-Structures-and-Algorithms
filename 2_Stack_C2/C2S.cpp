#include"C2S.h"

// Default Constructor
// assigns default values to class members and allocates memory dynamically
template <class T>
C2S<T>::C2S()
:size0(5), size1(5), tos0(0),  tos1(9){
		cout << "\nDC\n";
		arr = new T[10];
}


// Parametrized Constructor
// takes input for sizes of the two stacks and allocates memory dynamically
template <class T>
C2S<T>::C2S(int _size0, int _size1)
:size0(_size0), size1(_size1), tos0(0),  tos1(_size0 + _size1 -1){
		cout << "\nPC\n";
		arr = new T[_size0 + _size1];
}

// Destructor
template <class T>
C2S<T>::~C2S(){
	delete[] arr;
}

// Returns true if the stack is empty
// takes stack number as a parameter
template <class T>
bool C2S<T>::isEmpty(int s){
	switch(s){
		case 0:
			return(tos0 == 0);
			break;
		case 1:
			return(tos1 == (size0 + size1));
			break;

			// Stack expansion here...

	}
}

// Returns true if the stack is full
// takes stack number as a parameter
template <class T>
bool C2S<T>::isFull(int s){
	switch(s){
		case 0:
			return(tos0 == size0);
			break;
		case 1:
			return(tos1 == size0);
			break;

			// Stack expansion here...

	}
}

// Reads and returns the element on the top of the stack if the stack is not empty
// takes stack number as a parameter
template <class T>
T C2S<T>::peep(int s){
	switch(s){
		case 0:
			return arr[tos0 - 1];
			break;
		case 1:
			return arr[tos1 + 1]; 
			break;
	}
}

// Adds an element to the top of the stack if the stack is not full
// takes the stack number and the element as parameters
template <class T>
bool C2S<T>::push(int s, T t){
	switch(s){
		case 0:
			if(isFull(0)) throw runtime_error("Stack OverFlow");
			arr[tos0++] = t;
			return true;
		case 1:
			if(isFull(1))throw runtime_error("Stack OverFlow");
			arr[tos1--] = t;
			return true;
	}

}

// Removes and returns the element on the top of the stack if the stack is not empty
// takes the stack number as input
template <class T>
T C2S<T>::pop(int s)	{
	switch(s){
		case 0:
			if(isEmpty(0)) throw runtime_error("Stack Underflow");
			return arr[--tos0];
		case 1:
			if(isEmpty(1)) throw runtime_error("Stack Underflow");
			return arr[++tos1];
	}


}
