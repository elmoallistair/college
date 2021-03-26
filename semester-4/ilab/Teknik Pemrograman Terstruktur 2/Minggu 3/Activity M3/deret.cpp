#include <iostream> 
using namespace std; 

int main() { 
    int n; 
    cout << "Menampilkan deret genap" << endl; 
    cout << "kurang dari atau sama dengan n" << endl; 
    cout << "Masukkan nilai= "; cin >> n; 
    

    // Tampilkan deret bilangan genap dari besar ke kecil 
    for (int i = n; i >= 0; i -= 2) 
    cout << i << " "; 
    
    return 0; 
}