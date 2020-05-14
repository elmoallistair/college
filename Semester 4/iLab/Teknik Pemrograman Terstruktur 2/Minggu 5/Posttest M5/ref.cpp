#include <iostream>
using namespace std;

int main() {
    int x = 55;
    int &r = x;

    x = 10;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    r = 55;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    return 0;
}
