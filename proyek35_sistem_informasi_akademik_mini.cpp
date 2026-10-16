#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    string nama = "Izza Ahmaddina";
    string nim = "2026001";
    string prodi = "Informatika";

    cout << "=== SISTEM INFORMASI AKADEMIK MINI ===";
    cout << endl;
    cout << "1. Data Mahasiswa";
    cout << endl;
    cout << "2. KRS";
    cout << endl;
    cout << "3. Nilai";
    cout << endl;
    cout << "4. Jadwal";
    cout << endl;
    cout << "5. Keuangan";
    cout << endl;
    cout << "6. Keluar";
    cout << endl;
    cout << "Pilih menu (1-6): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "--- DATA MAHASISWA ---";
            cout << endl;
            cout << "Nama  : " << nama;
            cout << endl;
            cout << "NIM   : " << nim;
            cout << endl;
            cout << "Prodi : " << prodi;
            cout << endl;
            break;

        case 2: {
            int subKrs;
            cout << "--- MENU KRS ---";
            cout << endl;
            cout << "1. Tambah";
            cout << endl;
            cout << "2. Lihat";
            cout << endl;
            cout << "Pilih submenu (1-2): ";
            cin >> subKrs;
            switch (subKrs) {
                case 1:
                    cout << "Berhasil menambahkan mata kuliah ke KRS.";
                    cout << endl;
                    break;
                case 2:
                    cout << "Daftar KRS: Pemrograman Dasar, Logika Informatika.";
                    cout << endl;
                    break;
                default:
                    cout << "Submenu KRS tidak valid!";
                    cout << endl;
                    break;
            }
            break;
        }

        case 3: {
            int subNilai;
            cout << "--- MENU NILAI ---";
            cout << endl;
            cout << "1. Input";
            cout << endl;
            cout << "2. Lihat";
            cout << endl;
            cout << "Pilih submenu (1-2): ";
            cin >> subNilai;
            switch (subNilai) {
                case 1:
                    cout << "Berhasil menginput nilai semester.";
                    cout << endl;
                    break;
                case 2:
                    cout << "Nilai Akademik: Pemrograman Dasar (A), Logika Informatika (A).";
                    cout << endl;
                    break;
                default:
                    cout << "Submenu Nilai tidak valid!";
                    cout << endl;
                    break;
            }
            break;
        }

        case 4:
            cout << "--- JADWAL KULIAH ---";
            cout << endl;
            cout << "Senin: Pemrograman Dasar | Selasa: Logika Informatika.";
            cout << endl;
            break;

        case 5:
            cout << "--- KEUANGAN ---";
            cout << endl;
            cout << "Status Pembayaran UKT: Lunas untuk Semester ini.";
            cout << endl;
            break;

        case 6:
            cout << "Keluar dari sistem informasi akademik. Terima kasih.";
            cout << endl;
            break;

        default:
            cout << "Pilihan menu utama tidak valid!";
            cout << endl;
            break;
    }

    return 0;
}