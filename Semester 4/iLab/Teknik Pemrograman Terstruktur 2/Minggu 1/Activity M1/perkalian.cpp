#include<iostream>
using namespace std;

int main() {
	int a1,a2,hasil;

	cout << "Masukan angka pertama: ";
	cin >> a1;
	cout << "Masukan angka kedua: ";
	cin >> a2;

	hasil = a1*a2;
	cout << "\nHasil: " << a1 << " x " << a2 << " = " << hasil << endl;

	return 0;
}