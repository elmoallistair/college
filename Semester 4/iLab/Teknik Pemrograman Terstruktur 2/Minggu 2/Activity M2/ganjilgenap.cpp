#include <iostream> 
using namespace std; 

int main() { 
	int bilangan;  
	cout << "Masukan sebuah bilangan bulat: ";
	cin >> bilangan; 
	if (bilangan % 2) { 
		cout << "Bilangan: " << bilangan << " tidak habis dibiagi 2" << endl; 
		cout << "Jadi termasuk bilangan ganjil" << endl; 
	} else { 
		cout << "Bilangan: " << bilangan << " habis dibagi 2" << endl; 
		cout << "Jadi termasuk bilangan genap" << endl; 
	}
	return 0;
}
