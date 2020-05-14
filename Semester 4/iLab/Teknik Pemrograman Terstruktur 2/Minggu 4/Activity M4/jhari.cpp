#include <iostream>
using namespace std;

int main() {
	int jum_hari[12] = { 
	    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	
	for (int i = 0; i < 12; i++)
		cout << "jum_hari[" << i << "] = " << jum_hari[i] << endl;
}