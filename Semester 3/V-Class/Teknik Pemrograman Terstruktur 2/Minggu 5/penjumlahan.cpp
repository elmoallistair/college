#include <iostream> 
using namespace std; 

float tambah(float x, float y);

int main() { 
	float a, b, c; 
	cout << "A = "; 
	cin >> a; cout << "B = "; 
	cin >> b; 
	
	c = tambah(a,b);
	cout << "\n A + B = " << c; 
} 

float tambah(float x, float y) { 
	return (x + y);
} 