#include <iostream>
#include <string>
using namespace std;

int main() {
    char kodeBrand, kodeUkuran, lagi;
    int jumlahBeli;
    double hargaSusu, totalBayar;

    do {
        // Pilihan susu dan ukuran kaleng
        cout << "TOKO KELONTONG KERONCONGAN\n";
        cout << "--------------------------\n";
        cout << "A. Susu Dancow\n";
        cout << "  1. Ukuran Kecil\n";
        cout << "  2. Ukuran Sedang\n";
        cout << "  3. Ukuran Besar\n";
        cout << "B. Susu Bendera\n";
        cout << "  1. Ukuran Kecil\n";
        cout << "  2. Ukuran Sedang\n";
        cout << "  3. Ukuran Besar\n";
        cout << "C. Susu SGM\n";
        cout << "  1. Ukuran Kecil\n";
        cout << "  2. Ukuran Sedang\n";
        cout << "  3. Ukuran Besar\n";

        // Input jenis susu dan ukuran kaleng
        cout << "Masukan Jenis Susu (A/B/C): ";
        cin >> kodeBrand;
        cout << "Masukan Ukuran Kaleng (1/2/3): ";
        cin >> kodeUkuran;

        // Menentukan harga susu berdasarkan brand dan ukuran kaleng
        if (kodeBrand == 'A' || kodeBrand == 'a') {
            if (kodeUkuran == '1') {
                hargaSusu = 15000;
            } else if (kodeUkuran == '2') {
                hargaSusu = 20000;
            } else if (kodeUkuran == '3') {
                hargaSusu = 25000;
            }
        } else if (kodeBrand == 'B' || kodeBrand == 'b') {
            if (kodeUkuran == '1') {
                hargaSusu = 13500;
            } else if (kodeUkuran == '2') {
                hargaSusu = 17500;
            } else if (kodeUkuran == '3') {
                hargaSusu = 20000;
            }
        } else if (kodeBrand == 'C' || kodeBrand == 'c') {
            if (kodeUkuran == '1') {
                hargaSusu = 15000;
            } else if (kodeUkuran == '2') {
                hargaSusu = 18500;
            } else if (kodeUkuran == '3') {
                hargaSusu = 22000;
            }
        } else {
            cout << "Kode susu tidak valid, coba lagi.\n";
            continue; 
        }

        // Input jumlah beli
        cout << "Jumlah Yang dibeli: ";
        cin >> jumlahBeli;

        // Total pembayaran
        totalBayar = hargaSusu * jumlahBeli;

        // Menampilkan harga satuan dan total pembayaran
        cout << "Harga Satuan Barang Rp. " << hargaSusu << endl;
        cout << "Harga Yang Harus dibayar Sebesar Rp. " << totalBayar << endl;

        // Menanyakan apakah ingin menghitung transaksi lainnya
        cout << "Ingin hitung transaksi lainnya (Y/N)? ";
        cin >> lagi;
        } while (lagi == 'Y' || lagi == 'y'); 

    return 0;
}


// Nama             : Fajar Bagas Prasojo
// NIM              : 230401010265
// Kelas            : IF102
// Nama Mata Kuliah : Algoritma dan Pemrograman