#include <iostream> 
using namespace std; 
void tampilkan_data(int data[], int jum_data);
int tmp;

int main() { 
	int data[] = { 5, 100, 20, 31, 77, 88, 99, 20, 55, 1 };
	int jum_data = sizeof(data) / sizeof(int);
	cout << "Data semula: " << endl;
	tampilkan_data(data, jum_data);
	
	for (int i = 0; i < jum_data - 1; i++)
	for (int j = i; j < jum_data; j++) {
		if (data[i] > data[j]) {
		    tmp = data[i]; 
		    data[i] = data[j];
		    data[j] = tmp;
		}
	}

	cout << "Data hasil pengurutan: " << endl;
	tampilkan_data(data, jum_data);
	
	return 0;
}

void tampilkan_data(int data[], int jum_data) {
	for (int i = 0; i < jum_data; i++)
		cout << data[i] << " ";

	cout << endl;
}
