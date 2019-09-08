#include"C2S.h"

int main(){
	
	cout << "\n Default Constructor Stack Test\n";
	C2S<int> d;
	try{
		for (int i = 1; i < 7; i++){
			d.push(0, i*11);
			cout << endl << "Peep " << d.peep(0) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	try{	
		for (int i = 0; i < 7; i++){
			cout << endl << d.pop(0);
			cout << endl << "Peep " << d.peep(0) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	try{
		for (int i = 1; i < 7; i++){
			d.push(1, i*11);
			cout << endl << "Peep " << d.peep(1) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	try{	
		for (int i = 0; i < 7; i++){
			cout << endl << d.pop(1);
			cout << endl << "Peep " << d.peep(1) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	
	
	cout << "\nParametrized Constructor \n";
	C2S<int> p(5, 5);

	try{
		for (int i = 1; i < 7; i++){
			p.push(0, i*11);
			cout << endl << "Peep " << p.peep(0) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	try{	
		for (int i = 0; i < 7; i++){
			cout << endl << p.pop(0);
			cout << endl << "Peep " << p.peep(0) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	try{
		for (int i = 1; i < 7; i++){
			p.push(1, i*11);
			cout << endl << "Peep " << p.peep(1) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
	try{	
		for (int i = 0; i < 7; i++){
			cout << endl << p.pop(1);
			cout << endl << "Peep " << p.peep(1) << endl;
		}
	}
	catch(runtime_error e){
		cout << endl <<  e.what() << endl;
	}	
	
}
	
