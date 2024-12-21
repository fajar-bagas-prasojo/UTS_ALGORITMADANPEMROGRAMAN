#include <iostream>
using namespace std;

int main() {
    const int size = 5;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}

// Nama             : Fajar Bagas Prasojo
// NIM              : 230401010265
// Kelas            : IF102
// Nama Mata Kuliah : Algoritma dan Pemrograman