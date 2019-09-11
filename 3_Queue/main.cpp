#include"Q.h"

int main(){
	// create a menu driven program for the data structure
	
	// create the data structure object 

	Q<int> q(5);

	int option = 1;

	cout << "\nWelcome to the ACTS queue\n";

	while(option){
		cout << "\nPlease choose an option ...\n";
		cout << "\n1. Add to queue\n";
		cout << "\n2. Remove from queue\n";
		cout << "\n3. Length of queue\n";
		cout << "\n4. Display queue\n";
		cout << "\n\n0. EXIT\n\n";

		cin >> option;

		switch(option){
			case 1: {
					int ele;
					cout << "\nEnter the element : ";
					cin >> ele;
					cout << endl << endl;
					q.addQ(ele);
				}
				break;

			case 2: {
					cout << "\nThe removed element is : ";
					cout << q.delQ();
					cout << "\n\n";
				}
				break;

			case 3: 
				cout << "\nThere are " <<  q.getCount() << " elements in the queue.\n";
				break;

			case 4: {
					q.display();
				}
				break;
		}
	}
}
