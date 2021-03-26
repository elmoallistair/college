#include <iostream>
using namespace std;

int main() {

	//deklarasi variabel array matriks berdimensi 2
	int matriks [2][4] = {{1,2,3,4},{5,6,7,8}};
	int i,j;	

	//statement perulangan for untuk indeks array baris matriks
	for (i=0;i<2;i++) {	
		//[1] statement perulangan for untuk indeks array kolom matriks
		for (j=0;j<4;j++) {
			//[2] mencetak nilai sesuai indeks array baris dan kolom
			cout<<matriks[i][j]<<" ";
		}
		cout<<endl;
	}
}