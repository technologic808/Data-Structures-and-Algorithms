#include "Q.h"

template <class T>
Q<T>::Q():size(5), front(0), rear(0), count(0){
	q = new T[size];
}

template <class T>
Q<T>::Q(int s):size(s), front(0), rear(0), count(0){
	q = new T[size];
}
template <class T>
bool Q<T>::isFull(){
	return ((rear + 1)% size == front);
}
template <class T>
bool Q<T>::isEmpty(){
	return (rear == front);
}
template <class T>
bool/*shit*/ Q<T>::addQ(T t){
	bool b = false;
	if (!isFull()){
		q[rear]	= t;
		rear = (rear + 1) % size;
		count ++;
		b = true;
	}
	return b;
	//throw runtime_error("\nQueue is empty!");
}

template <class T>
int Q<T>::getCount(){return count;}

template <class T>
T Q<T>::delQ(){
	if (!isEmpty()){
		T t = q[front];
		front = (front + 1) % size;
		count --;
		return t;	
	}
	throw runtime_error("\nQueue is full!\n");
}

template <class T>
void Q<T>::display(){
	cout << "\n\n";
	for(int i = 0; i < count; i++){
		cout << q[i] << " - ";
	}
	cout << endl << endl;
}

template <class T>
Q<T>::~Q(){
	delete[] q;
}


	
