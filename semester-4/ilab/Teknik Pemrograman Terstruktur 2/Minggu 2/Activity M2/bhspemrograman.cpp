	#include <iostream>
	using namespace std;

	int pilihan;

	int main() {
		cout << "Daftar bahasa pemrograman:\n";
		cout << "1. Java \n2. C++ \n3. PHP\n";

		ulangi:

		cout << "Masukan pilihan anda (1-3): ";
		cin >> pilihan;

		switch(pilihan) {
			case 1:
				cout << "Anda memilih Pemrograman Java";
				break;
			case 2:
				cout << "Anda memilih Pemrograman C++";
				break;	
			case 3:
				cout << "Anda memilih Pemrograman PHP";
				break;
			default:
				goto ulangi;
		} 
	}