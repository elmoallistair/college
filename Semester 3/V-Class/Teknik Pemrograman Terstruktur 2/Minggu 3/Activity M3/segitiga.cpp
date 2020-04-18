#include <iostream> 
using namespace std; 

int main() { 
    int tinggi, // Menyatakan tinggi segitiga 
        baris, // Pencacah untuk baris 
        kolom; // Pencacah untuk kolom 
    
    cout << "Tinggi segitiga = "; cin >> tinggi; cout << endl; // Membuat baris kosong 
    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = 1; kolom <= baris; kolom++) 
            cout << '*'; 
        cout << endl; // Pindah baris 
    }
    return 0; 
}