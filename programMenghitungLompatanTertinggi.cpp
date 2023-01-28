#include <iostream>

using namespace std;

void tukarNilai(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int array[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				tukarNilai(&array[j], &array[j + 1]);
			}
		}
	}
}

void cetakArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << "\n";
}                         

int main() {
	int jumlahPeserta = 0;

	cout << "#########################################" << "\n## Program Menghitung Lompat Tertinggi ##\n" << "#########################################\n\n";
	cout << "Masukkan banyak peserta: ";
	cin >> jumlahPeserta;

	int tinggiLompatan[jumlahPeserta];
	
	cout << "\n----------------------------\n";
	cout << "Masukkan tinggi lompatan peserta (dalam satuan cm):\n";
	for (int i = 0; i < jumlahPeserta; i++) {
		int i_ = i + 1;
		cout << "Peserta #" << i_ << ": ";
		cin >> tinggiLompatan[i];
	}
	
	bubbleSort(tinggiLompatan, jumlahPeserta);

	cout << "\nHasil pengurutan lompatan:\n--------------------------\n";
	cetakArray(tinggiLompatan, jumlahPeserta);

	return 0;
}