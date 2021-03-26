#include <iostream>
using namespace std;

int main() {

	// [[1]] deklarasikan variabel total_beli, potongan, jumlah_bayar bertipe data double
	double total_beli, potongan=0, jumlah_bayar=0;
	     
	// meminta user input total pembelian 
	cout << "Total Pembelian Rp. ";

	// simpan user input pada variabel total beli
	cin >> total_beli;
	     
	// [[2]] statement percabangan IF
	if(total_beli >= 50000)
        potongan= 0.2 * total_beli;
	        
	// [[3]] statement percabangan ELSE    
	else
		potongan = 0.05 * total_beli;
	   
	// Tampilkan besar potongan 
	cout << "Besar Potongan Rp. " << potongan << endl;	

	// kurangi total beli dengan potongan 
	jumlah_bayar=total_beli-potongan;
	    
	// Tampilkan jumlah yang harus dibayar   
	cout << "Jumlah yang harus dibayarkan Rp. " << jumlah_bayar;
    
    return 0;
}
