#include <iostream> 
using namespace std; 

int main() { 
	const int JUM_ELEMEN = 5; 
	float suhu[JUM_ELEMEN];
    
	cout << "Masukkan " << JUM_ELEMEN << " data suhu" << endl; 
	for (int i = 0; i < JUM_ELEMEN; i++) {
		cout << i + 1 << " : "; cin >> suhu[i]; 
	}
	
	cout << "Data suhu yang Anda masukkan" << endl; 
	for (int i = 0; i < JUM_ELEMEN; i++) {
		cout << suhu[i] << endl; 
	}
	return 0; 
} 