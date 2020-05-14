#include<iostream>
using namespace std;

int main() {
	float fahren, celcius;

	cout << "Nilai derajat Fahrenhet: ";
	cin >> fahren;

	celcius = (fahren - 32) * 5/9;
	cout << "Identik dengan " << celcius << " derajat Celcius " << endl;

	return 0;
}