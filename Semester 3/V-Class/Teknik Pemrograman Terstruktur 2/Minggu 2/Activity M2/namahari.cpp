#include <iostream> 
using namespace std; 

int main() { 
	int x; 
	cout<<"Masukkan angka untuk mengetahui hari apa(1-7): ";
	cin >> x; 
	switch (x){ 
		case 1: 
			cout << "Hari ke "<<x<<" : Senin"; 
			break; 
		case 2: 
			cout<<"Hari ke "<<x<<" : Selasa"; 
			break; 
		case 3: 
			cout<<"Hari ke "<<x<<" : Rabu"; 
			break; 
		case 4: 
			cout<<"Hari ke "<<x<<" : Kamis";
			break; 
		case 5: 
			cout<<"Hari ke "<<x<<" : Jum’at"; 
			break; 
		case 6: 
			cout<<"Hari ke "<<x<<" : Sabtu"; 
			break; 
		case 7: 
			cout<<"Hari ke "<<x<<" : Minggu"; 
			break; 
		default: 
			cout<<"Tidak ada hari ke "<<x; 
	} 
}