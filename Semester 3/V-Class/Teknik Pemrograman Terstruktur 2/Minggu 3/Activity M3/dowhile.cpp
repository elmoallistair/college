#include <iostream> 
using namespace std; 

int main(){
    string nama;
    char status;
    
    do{
        cout <<"Masukkan namamu: "; cin >> nama; 
        cout << "Namamu adalah: "<<nama<<endl;
        cout << "Lagi [Y/N]? "; cin >> status;
    
    } while(status=='Y' || status=='y');
    
    cout<<"Keluar dari loop"<<endl;
    
    return 0; 
}