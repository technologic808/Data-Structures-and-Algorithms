#include"List.h"

int main(){
	// Create a menu driven program to demonstrate the functionality of a singly linked list
	int option = 1;

	// Initialize List
	List<int> l;

	cout << "\nWelcome to ACTS Singly Linked List\n";
	
	while(option){
		cout << "\nPlease select an option\n";
		cout << "\n1. Insert at the beginning of the list\n";
		cout << "\n2. Insert at the end of the list\n";
		cout << "\n3. Delete from the beginning of the list\n";
		cout << "\n4. Delete from the end of the list\n";
		cout << "\n5. Insert at a specific position\n";
		cout << "\n6. Delete from a specific position\n";
		cout << "\n7. Reverse the list\n";
		cout << "\n8. Display the list\n";
		cout << "\n\n0. EXIT\n\n";

		cin >> option;

		switch (option){
			case 1:{
					int temp;
			       		cout << "\nPlease enter a value:  ";
					cin >> temp;
					if(l.addAtBegin(temp)) cout << "\n\nSuccess!";
					else cout << "\n\nFailure!";
					cout << endl;
			       	}
				break;
			
			case 2:{
			       	
			       	}
				break;
			
			case 3:{
			       		cout << endl << l.delFromBegin()<< endl;	
			       	}
				break;
			
			case 4:{
			       	
			       	}
				break;
			
			case 5:{
			       	
			       	}
				break;
			
			case 6:{
			       	
			       	}
				break;
			
			case 7:{
			       	
			       	}
				break;
			
			case 8:{
			       		l.display();	
					cout << endl;
			       	}
				break;
			default:
				cout << "\nPlease enter a valid input!\n";
				break;
			
		}



	}
}
