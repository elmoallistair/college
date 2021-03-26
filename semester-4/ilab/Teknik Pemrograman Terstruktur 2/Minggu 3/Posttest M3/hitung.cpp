#include <iostream>
using namespace std;

int main() {
    // [[1]] deklarasikan variabel sampai bertipe data integer
    int sampai = 0;
    
    // meminta user input angka sbg patas penghitungan
    cout << "Lakukan penghitungan sampai : ";
   
    // statement untuk input angka
    cin >> sampai;
    
    
    // statement fungsi perulangan
    for(int i=1; i<=sampai; i++) {
        cout << i << endl;
    }

    return 0;
}
