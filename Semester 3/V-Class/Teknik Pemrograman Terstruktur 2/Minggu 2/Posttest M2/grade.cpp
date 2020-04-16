#include <iostream>
using namespace std;

int main(){

    // [[1]] deklarasikan variabel grade bertipe data character
    char grade;

    // user menginput grade
    cout << "Inputkan grade: ";

    // [[2]] statement untuk input pada variabel grade menggunakan cin
    cin >> grade;

    // statement fungsi percabangan
    switch (grade){
        case 'A':
            cout << "Luar biasa!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Anda lulus" << endl;
            break;
        case 'E':
        case 'F':
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Grade Salah!" << endl;
    }

    return 0;
}
