// 1. Contoh beberapa operasi dengan operator majemuk
// Lengkapi kode program di bawah ini sehingga dapat berjalan semestinya.

#include <iostream>
using namespace std;

int main() {
    // [[1]] deklarasikan variabel x bertipe data integer
    int x;
    // [[2]] Mula-mula, x bernilai 2
    x =  2;
    cout << "x = " << x << endl;
   
    // operasi dengan operator majemuk
    x += 2;
    cout << "Setelah x += 2, x = " << x << endl;
    
    // operasi dengan operator majemuk
    x *= 2;
    cout << "Setelah x *= 2, x = " << x << endl;

    return 0;
}