#include <iostream>
using namespace std;
int main() {
    // [[1]] Deklarasikan variabel jumlah bertipe data integer
    int jumlah = 0;

    // [[2]] Deklarasikan variabel angka bertipe data integer
    int angka;
    
    cout << "Program menambahkan 5 bilangan bulat" << endl;
    
    //statement fungsi perulangan
    for(int i = 1; i <= 5; i++) {
 
        //Meminta user input angka
        cout << "Masukan angka : ";
        
        // [[3]] statement untuk input angka
        cin >> angka;
        jumlah += angka;
    }
    
    // Tampilkan hasil penjumlahan 5 angka
    cout << "Hasil Penjumlahan : " << jumlah << endl;

    return 0;
}