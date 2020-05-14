#include <iostream>
using namespace std;
int main()
{
    // [1] deklarasikan variabel b bertipe float 
    float b;
    // [2] deklarasikan variabel x dan z bertipe integer
    int x,z;           
    // user memasukan nilai 1 pada variabel b sebagai nilai awal
    cout<<"Masukan Angka Awal  : "; cin>>b;
    
    // user memasukan nilai 2 pada variabel x sebagai nilai perkalian
    cout<<"Masukan Angka Kedua : "; cin>>x;
    
    // user memasukan batas akhir pada variabel z sebagai nilai maksimum
    cout<<"Batas Akhir Angka   : "; cin>>z;
    
    //statement fungsi perulangan
    do {
        cout<<b<<endl;
        b*=x;
    }
    while(b<=z);
    
    return 0;
}