#include<iostream>
using namespace std;

int main() {
	int a,b,t,luas;

	cout << "Masukkan sisi a: ";
	cin >> a;
	cout << "Masukkan sisi b: ";
	cin >> b;
	cout << "Masukkan tinggi: ";
	cin >> t;

	luas = (a+b)/2*t;
	cout << "\nLuas trapesium: " << luas;

	return 0;
}