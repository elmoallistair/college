#include <iostream> 
using namespace std; 

int main(){ 
	string password; 	

	cout << "Masukan password: "; 
	cin >> password; 
	 
	// percabangan if/else 
	if ((password == "gunadarma")||(password == "universitas")||(password == "ilab")){ 
		cout << "Selamat datang!" << endl; 
	} else { 
		cout << "Password salah, coba lagi!"<< endl; 
	} 
	 
	cout << "Terimakasih sudah menggunakan aplikasi ini!" << endl; 
	 
	return 0; 
} 