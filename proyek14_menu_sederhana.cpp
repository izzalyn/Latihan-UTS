#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "=== SISTEM AKADEMIK KAMPUS ===";
    cout << endl;
    cout << "1. Profil Mahasiswa";
    cout << endl;
    cout << "2. Nilai Akademik";
    cout << endl;
    cout << "3. Jadwal Kuliah";
    cout << endl;
    cout << "4. Status Keuangan";
    cout << endl;
    cout << "5. Kartu Hasil Studi (KHS)";
    cout << endl;
    cout << "6. Keluar";
    cout << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Menampilkan data profil mahasiswa aktif.";
            cout << endl;
            break;
        case 2:
            cout << "Menampilkan daftar nilai semester ini.";
            cout << endl;
            break;
        case 3:
            cout << "Menampilkan jadwal perkuliahan mingguan.";
            cout << endl;
            break;
        case 4:
            cout << "Menampilkan informasi pembayaran UKT dan tagihan.";
            cout << endl;
            break;
        case 5:
            cout << "Menampilkan Kartu Hasil Studi (KHS) mahasiswa.";
            cout << endl;
            break;
        case 6:
            cout << "Program selesai. Terima kasih.";
            cout << endl;
            break;
        default:
            cout << "Pilihan menu tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}