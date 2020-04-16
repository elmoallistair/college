#include <iostream> 
using namespace std; 

int main(){ 
	cout << "=== Program Pembayaran ===" << endl; 
	unsigned int total_belanja; 
	cout << "Masukan total belanja: "; cin >> total_belanja; 
	// menggunakan percabangan if if(ttal_belanja > 100000){ cout << "Selamat! anda dapat hadiah" << endl; } 
	if(total_belanja > 100000){ 
		cout << "Selamat! anda dapat hadiah" << endl; 
	} 
	cout << "Terimakasih sudah berbelanja di toko kami" << endl; 
	return 0; 
}