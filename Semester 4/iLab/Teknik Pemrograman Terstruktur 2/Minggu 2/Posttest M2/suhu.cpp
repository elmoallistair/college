#include <iostream>
using namespace std; 

int main() { 
   
    // [[1]] deklarasikan varibael suhu bertipe data integer
    int suhu;
    
    // user menginput besar suhu
    cout << "masukkan suhu : ";
    cin >> suhu;

    // [[2]] statement fungsi percabangan switch
    switch(suhu){    
        case 0:        
            cout << "dingin";
            break;    
    
        case 25:        
            cout << "sejuk";        
            break;
    
        case 30:        
            cout << "panas";        
            break;    
    
        default:        
            cout << "suhu tidak diketahui";
    } 

    return 0;
}
