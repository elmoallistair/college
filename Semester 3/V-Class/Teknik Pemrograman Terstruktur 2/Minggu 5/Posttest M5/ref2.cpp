#include <iostream>
using namespace std;

void Tukar(int a, int b);

int main() {
    int a, b;

    a = 55;
    b = 77;

    cout << "main() : a = " << a << ", b = " << b << endl;
    Tukar(a,b);
    cout << "main() : a = " << a << ", b = " << b << endl;

    return 0;
}

void Tukar(int a, int b) {
    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    cout << "tukar(): a = " << a << ", b = " << b << endl;
}