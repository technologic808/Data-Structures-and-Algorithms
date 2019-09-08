#include "Stack.h"

int main(){
	
	// Menu Driven Stack Implementation
	
	// Flag to control the menu 
	int flag = 1;

	// Variable to store user input until pushed to stack
	int element = 0;

	// Stack initialization
	Stack<int> s;
	cout << endl << "Welcome to ACTS Stack" << endl;
	
	// Menu loop
	while(flag){

		// Menu Options
		cout << endl << "1. Push" << endl;
		cout << endl << "2. Pop" << endl;
		cout << endl << "3. Peep" << endl;
		cout << endl << "4. Empty" << endl;
		cout << endl << "\n\n\n\n0. Exit" << endl;
		
		// Input from user
		cin >> flag;


		try{
		switch(flag){
			// Push
			case 1: 
				cout << endl << "Enter element to push " ;
				cin >> element;
				s.push(element);
				cout << endl;
				break;
			
			// Pop
			case 2:
				cout << endl << "The popped element is ";
				cout << s.pop() << endl;		
				break;

			//Peep
			case 3:
				cout << endl << "The element on the top is ";
				cout << s.peep() << endl;
				break;

			// Empty
			case 4:
				s.empty();
				cout << endl <<  "The stack has been emptied" << endl;
				break;
		}
		}
		catch (runtime_error e){
			cout << endl << e.what() << endl;
		}
	}
	
}	
