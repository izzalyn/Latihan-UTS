#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "----- SISTEM LAYANAN KAMPUS -----";
    cout << endl;
    cout << "1. Akademik";
    cout << endl;
    cout << "2. Keuangan";
    cout << endl;
    cout << "3. Perpustakaan";
    cout << endl;
    cout << "4. Kemahasiswaan";
    cout << endl;
    cout << "5. Laboratorium";
    cout << endl;
    cout << "6. Keluar";
    cout << endl;
    cout << "Pilih menu (1-6): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "--- MENU AKADEMIK ---";
            cout << endl;
            cout << "Menampilkan informasi KRS, Nilai, dan Jadwal kuliah.";
            cout << endl;
            break;

        case 2:
            cout << "--- MENU KEUANGAN ---";
            cout << endl;
            cout << "Menampilkan status pembayaran UKT dan rincian tagihan semester.";
            cout << endl;
            break;

        case 3:
            cout << "--- MENU PERPUSTAKAAN ---";
            cout << endl;
            cout << "Menampilkan daftar buku pinjaman dan riwayat peminjaman perpustakaan.";
            cout << endl;
            break;

        case 4:
            cout << "--- MENU KEMAHASISWAAN ---";
            cout << endl;
            cout << "Menampilkan informasi kegiatan organisasi, beasiswa, dan prestasi.";
            cout << endl;
            break;

        case 5:
            cout << "--- MENU LABORATORIUM ---";
            cout << endl;
            cout << "Menampilkan jadwal praktikum dan peminjaman alat laboratorium.";
            cout << endl;
            break;

        case 6:
            cout << "Keluar dari sistem layanan kampus. Terima kasih.";
            cout << endl;
            break;

        default:
            cout << "Pilihan tidak valid! Silakan masukkan angka 1 sampai 6.";
            cout << endl;
            break;
    }

    return 0;
}