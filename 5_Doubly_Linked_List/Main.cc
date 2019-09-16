#include"Node.h"
#include"DLinkedList.h"

int main(){
	int option = 1;
	DLinkedList<int> dll;

	cout << "\nWelcome to ACTS Doubly Linked List\n";

	while(option){
		cout << "\nPlease select an option...\n";
		cout << "\n1. Add at Beginning\n";
		cout << "\n2. Add at End\n";
		cout << "\n3. Delete from Beginning\n";
		cout << "\n4. Delete from End\n";
		cout << "\n5. Empty the list\n";
		cout << "\n6. Display List\n";
		cout << "\n\n0. EXIT\n\n";

		cin >> option;

		switch(option){
			case 1:{
				       	int ele;
				       	cout << "\n\nPlease enter data:  ";
				       	cin >> ele;
					if(dll.addAtBegin(ele)) cout << "\nSuccess!\n";
					else cout << "\nFailure\n";
			       }
			       break;
			case 2:{
				       	int ele;
					cout << "\nPlease enter data: ";
					cin >> ele;
					if(dll.addAtEnd(ele)) cout << "\nSuccess!\n";
					else cout << "\nFailure!\n";
			       }
			       break;
			case 3:{
				       	cout << "\nThe deleted link is " << dll.delFromBegin() << endl;
			       }
			       break;
			case 4:{
				       	cout << "\nThe deleted link is " << dll.delFromEnd() << endl;
			       }
			       break;
			case 5:{
				       	if(dll.empty()) cout << "\nList has been emptied successfully!\n";
					else cout << "\nFailed to empty list!\n";
			       }
			       break;
			case 6:{
				       dll.display();
			       }
			       break;
			default:{
					cout << "\nPlease enter a valid choice!\n";
			       }
			       break;
		}
	}
}
