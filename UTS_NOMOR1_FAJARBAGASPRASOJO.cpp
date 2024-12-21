#include <iostream>
using namespace std;

int main() {
    // Diberikan nilai
    int A = 3, B = 6, C = 2, K = 5, L = 4, M = 3;

    // a
    bool D_a = (4 + 2 > A) && (B - 2 > 3 + 2) || (B + 2 <= 6 + 2);

    // b
    bool D_b = (K + 5 < M) || ((C * M < L) && (2 * M - L > 0));

    // c
    bool D_c = (L + 5 < M) || ((C * K < L) && (2 * K - L > 0));

    // d
    bool D_d = (A * 4 <= 3 * M + B);

    // e
    bool D_e = (K + 10 > A) && (L - 2 > 4 * C);

    // Hasil
    cout << "a. " << (D_a ? "true" : "false") << endl;
    cout << "b. " << (D_b ? "true" : "false") << endl;
    cout << "c. " << (D_c ? "true" : "false") << endl;
    cout << "d. " << (D_d ? "true" : "false") << endl;
    cout << "e. " << (D_e ? "true" : "false") << endl;

    return 0;
}


// Nama             : Fajar Bagas Prasojo
// NIM              : 230401010265
// Kelas            : IF102
// Nama Mata Kuliah : Algoritma dan Pemrograman