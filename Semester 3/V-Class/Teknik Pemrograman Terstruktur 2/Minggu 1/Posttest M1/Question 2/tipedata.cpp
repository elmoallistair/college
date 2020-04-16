#include <iostream>
using namespace std;

int main() {
    // [[1]] deklarasikan variabel jumlah bertipe data integer 
    int jumlah;
    // [[2]] deklarasikan variabel harga_per_unit bertipe data float
    float harga_per_unit;
    // [[3]] deklarasikan variabel harga_total bertipe data double
    double harga_total;
    
    jumlah = 5;
    harga_per_unit = 5203.02;
    harga_total = harga_per_unit * jumlah;

    cout << "Harga total =  "
         << harga_total << endl;

    return 0;
}
