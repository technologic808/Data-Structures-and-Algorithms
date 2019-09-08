#include <iostream>
#include<stdexcept>

using namespace std;

template<class T>
class Q{
	private:
		int size;
		int rear;
		int front;
		T* q;
	public:
		Q();
		Q(int);
		bool isFull();
		bool isEmpty();
		bool/*shit*/ addQ(T);
		T delQ();
		
		
		
};
