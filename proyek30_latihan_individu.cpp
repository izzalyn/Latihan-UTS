#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "=== LATIHAN INDIVIDU ===";
    cout << endl;
    cout << "1. Nama Hari (1-7)";
    cout << endl;
    cout << "2. Nama Bulan (1-12)";
    cout << endl;
    cout << "3. Kalkulator Empat Operasi";
    cout << endl;
    cout << "4. Jenis Kendaraan (1-4)";
    cout << endl;
    cout << "5. Kategori Semester";
    cout << endl;
    cout << "Pilih menu (1-5): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int hari;
            cout << "Masukkan nomor hari (1-7): ";
            cin >> hari;
            switch (hari) {
                case 1: cout << "Senin"; break;
                case 2: cout << "Selasa"; break;
                case 3: cout << "Rabu"; break;
                case 4: cout << "Kamis"; break;
                case 5: cout << "Jumat"; break;
                case 6: cout << "Sabtu"; break;
                case 7: cout << "Minggu"; break;
                default: cout << "Nomor hari tidak valid!";
            }
            cout << endl;
            break;
        }
        case 2: {
            int bulan;
            cout << "Masukkan nomor bulan (1-12): ";
            cin >> bulan;
            switch (bulan) {
                case 1: cout << "Januari"; break;
                case 2: cout << "Februari"; break;
                case 3: cout << "Maret"; break;
                case 4: cout << "April"; break;
                case 5: cout << "Mei"; break;
                case 6: cout << "Juni"; break;
                case 7: cout << "Juli"; break;
                case 8: cout << "Agustus"; break;
                case 9: cout << "September"; break;
                case 10: cout << "Oktober"; break;
                case 11: cout << "November"; break;
                case 12: cout << "Desember"; break;
                default: cout << "Nomor bulan tidak valid!";
            }
            cout << endl;
            break;
        }
        case 3: {
            double a, b;
            char op;
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan operator (+, -, *, /): ";
            cin >> op;
            cout << "Masukkan angka kedua: ";
            cin >> b;
            switch (op) {
                case '+': cout << "Hasil: " << a + b; break;
                case '-': cout << "Hasil: " << a - b; break;
                case '*': cout << "Hasil: " << a * b; break;
                case '/': cout << "Hasil: " << a / b; break;
                default: cout << "Operator tidak valid!";
            }
            cout << endl;
            break;
        }
        case 4: {
            int kode;
            cout << "Masukkan kode kendaraan (1-4): ";
            cin >> kode;
            switch (kode) {
                case 1: cout << "Sepeda Motor"; break;
                case 2: cout << "Mobil Sedan"; break;
                case 3: cout << "Bus Kota"; break;
                case 4: cout << "Truk Barang"; break;
                default: cout << "Kode kendaraan tidak valid!";
            }
            cout << endl;
            break;
        }
        case 5: {
            int sem;
            cout << "Masukkan nomor semester (1-8): ";
            cin >> sem;
            switch (sem) {
                case 1:
                case 2:
                    cout << "Kategori: Mahasiswa Tahun Pertama";
                    break;
                case 3:
                case 4:
                    cout << "Kategori: Mahasiswa Tahun Kedua";
                    break;
                case 5:
                case 6:
                    cout << "Kategori: Mahasiswa Tahun Ketiga";
                    break;
                case 7:
                case 8:
                    cout << "Kategori: Mahasiswa Tahun Akhir";
                    break;
                default:
                    cout << "Semester tidak valid!";
            }
            cout << endl;
            break;
        }
        default:
            cout << "Pilihan menu tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}