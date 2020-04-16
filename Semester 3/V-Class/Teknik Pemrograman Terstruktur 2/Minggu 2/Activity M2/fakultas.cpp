#include <iostream>
using namespace std;

int fakultas;

int main(int argc, char const *argv[]) {
	cout << "Fakultas:\n 1. Hukum\n 2. Pendidikan\n 3. Ilmu Kesehatan\n 4. Teknik\n";
	cout << "Masukan fakultas anda: ";
	cin >> fakultas;

	switch(fakultas) {
		case 1:
			cout << "Program Studi:\n 1. Ilmu Hukum S1\n";
			break;
		case 2:
			cout << "Program Studi:\n 1. Bimbingan Konseling (S-l)\n 2. Pendidikan Guru PAUD (S-I) 3. Pendidikan Guru SD (S-l)\n";
			break;
		case 3:
			cout << "Program Studi:\n 1. Ilmu Keperawatan (S-1)\n 2. Keperawatan (D-3)\n 3. Farmasi (D-3)\n 4. Profesi Ners\n";
			break;
		case 4:
			cout << "Program Studi:\n 1. Teknik Industri (S-1)\n 2. Teknik Informatika (S-1)\n";
			break;	
	}
	return 0;
}
