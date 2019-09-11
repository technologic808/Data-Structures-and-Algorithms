#include <iostream>
#include<stdexcept>

using namespace std;

template<class T>
class Q{
	private:
		int size;
		int count;
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
		~Q();
		void display();	
		int getCount();
		
};

template class Q<int>;
template class Q<float>;
