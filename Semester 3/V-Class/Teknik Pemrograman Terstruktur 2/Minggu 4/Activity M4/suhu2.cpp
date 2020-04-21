#include <iostream> 
using namespace std;

int main() { 
	const int JUM_ELEMEN = 5;
	float suhu[JUM_ELEMEN];

	cout << "Masukkan " << JUM_ELEMEN << " data suhu" << endl;
	for (int i = 0; i < JUM_ELEMEN; i++) { 
		cout << i + 1 << " : "; cin >> suhu[i];
	}

	float total = 0;
	for (int i = 0; i < JUM_ELEMEN; i++) 
		total += suhu[i];

	float rata_rata = total / JUM_ELEMEN; 
	cout << "Suhu rata-rata: " << rata_rata << endl; 
} 
