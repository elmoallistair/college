#include<iostream>
#include <math.h>
using namespace std;

int main() {
	const float PHI = 3.141592;
	float jari_jari, luas, keliling;
	jari_jari = 10;
	luas = PHI * pow(jari_jari, 2);
	keliling = 2 * PHI * jari_jari;
	cout << "Luas = " << luas << endl;
	cout << "Keliling = " << keliling << endl;

	return 0;
}