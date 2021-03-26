#include <iostream>
using namespace std;

int main() {
  int jum_bantuan;
  int jum_orang;
  float hasil_pembagian;

  try {
    cout << "Menghitung pembagian bantuan" << endl;
    cout << "Jumlah bantuan: ";
    cin >> jum_bantuan;

    if (jum_bantuan < 0)
        throw string("Bantuan negatif");
    cout << "Jumlah orang: ";
    cin >> jum_orang;

    if (jum_orang == 0)
        throw string("Pembagian dengan nol");

    if (jum_orang < 0)
        throw string("Jumlah orang negatif");
    hasil_pembagian = jum_bantuan / jum_orang;
    cout << "Hasil pembagian = " << hasil_pembagian
         << endl;
  }

  catch (string e) {
      cout << e << endl;
  }
  
  cout << "Selesai..." << endl;
  return 0;
}