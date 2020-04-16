#include <iostream>
using namespace std;

int main() {	
	// [[1]] deklarasikan variabel d1, d2, luas bertipe data integer	
	int d1, d2, luas;

	// meminta user input diameter 1
	cout<<"Masukkan panjang diameter 1: ";	

	//simpan user input pertama pada variabel d1
	cin>>d1;	

	// meminta user input diameter 2
	cout<<"Masukkan panjang diameter 2: ";	

	// [[2]] simpan user input kedua pada variabel d2	
	cin >> d2;

	// rumus luas belah ketupat 
	luas=0.5*d1*d2;
	 
	// tampilkan hasil luas
	cout<<"\nLuas Belah ketupat: "<<luas;

	return 0;
}