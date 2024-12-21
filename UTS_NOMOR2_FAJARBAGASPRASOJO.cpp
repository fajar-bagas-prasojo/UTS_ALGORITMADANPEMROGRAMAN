#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

// Tunjangan jabatan
float hitungTunjanganJabatan(int golongan) {
    float persentase = 0;
    if (golongan == 1) persentase = 0.05;
    else if (golongan == 2) persentase = 0.10;
    else if (golongan == 3) persentase = 0.15;
    return 3500000 * persentase;
}

// Tunjangan pendidikan
float hitungTunjanganPendidikan(int pendidikan) {
    float persentase = 0;
    if (pendidikan == 1) persentase = 0.025;
    else if (pendidikan == 2) persentase = 0.05;
    else if (pendidikan == 3) persentase = 0.075;
    return 3500000 * persentase;
}

// Honor lembur
float hitungHonorLembur(int jamKerja) {
    int jamLembur = (jamKerja > 8) ? (jamKerja - 8) : 0;
    return jamLembur * 12500;
}

int main() {
    string nama;
    int golongan, pendidikan, jamKerja;
    char ulang;

    do {
        // Input data karyawan
        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI\n";
        cout << "Nama Karyawan: ";
        getline(cin, nama);

        cout << "Golongan (1/2/3): ";
        cin >> golongan;
        while (golongan < 1 || golongan > 3) {
            cout << "Golongan tidak valid, masukkan kembali (1/2/3): ";
            cin >> golongan;
        }

        cout << "Pendidikan (1=SMU/A, 2=D3, 3=S1): ";
        cin >> pendidikan;
        while (pendidikan < 1 || pendidikan > 3) {
            cout << "Pendidikan tidak valid, masukkan kembali (1=SMU/A, 2=D3, 3=S1): ";
            cin >> pendidikan;
        }

        cout << "Jumlah Jam Kerja: ";
        cin >> jamKerja;
        while (jamKerja < 0) {
            cout << "Jam kerja tidak valid, masukkan kembali: ";
            cin >> jamKerja;
        }

        // Hitung komponen honor
        float honorTetap = 3500000;
        float tunjanganJabatan = hitungTunjanganJabatan(golongan);
        float tunjanganPendidikan = hitungTunjanganPendidikan(pendidikan);
        float honorLembur = hitungHonorLembur(jamKerja);
        float totalHonor = honorTetap + tunjanganJabatan + tunjanganPendidikan + honorLembur;

        // Output hasil
        cout << "\nKaryawan yang bernama: " << nama << "\n\n";
        cout << "Honor yang diterima\n";
        cout << "Honor Tetap          : Rp. " << fixed << setprecision(2) << honorTetap << "\n";
        cout << "Tunjangan Jabatan    : Rp. " << fixed << setprecision(2) << tunjanganJabatan << "\n";
        cout << "Tunjangan Pendidikan : Rp. " << fixed << setprecision(2) << tunjanganPendidikan << "\n";
        cout << "Honor Lembur         : Rp. " << fixed << setprecision(2) << honorLembur << "\n";
        cout << "----------------------------------------\n";
        cout << "Honor Yang Diterima  : Rp. " << fixed << setprecision(2) << totalHonor << "\n";

        // Konfirmasi untuk menghitung ulang
        cout << "\nHitung ulang honor karyawan lain? (Y/N): ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    cout << "Program selesai.\n";
    return 0;
}


// Nama             : Fajar Bagas Prasojo
// NIM              : 230401010265
// Kelas            : IF102
// Nama Mata Kuliah : Algoritma dan Pemrograman
