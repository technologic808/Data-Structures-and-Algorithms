#include "Q.h"

template<class T>
		int size;
		int rear;
		int front;
		T* q;

Q():size(5){
	q = new T[size];
}
Q(int s):size(s){
	q = new T[size];
}
bool isFull(){
	return ((rear + 1)% size == front);
}
bool isEmpty(){
	return (rear == front);
}
bool/*shit*/ addQ(T t){
	q[rear]	= t;
	rear = (rear + 1) % size;
}
T delQ(){}


	
