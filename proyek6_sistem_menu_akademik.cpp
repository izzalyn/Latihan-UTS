#include <iostream>

using namespace std;

int main() {
    int menu;
    int subKRS;

    cout << "===== SISTEM AKADEMIK =====" << endl;
    cout << "1. Biodata" << endl;
    cout << "2. KRS" << endl;
    cout << "3. Nilai" << endl;
    cout << "4. Jadwal" << endl;
    cout << "5. Transkrip" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu (1-6): ";
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "Menampilkan Menu Biodata Mahasiswa." << endl;
            break;
        case 2:
            cout << "\n--- SUBMENU KRS ---" << endl;
            cout << "1. Tambah Mata Kuliah" << endl;
            cout << "2. Hapus Mata Kuliah" << endl;
            cout << "3. Lihat KRS" << endl;
            cout << "Pilih submenu: ";
            cin >> subKRS;

            switch (subKRS) {
                case 1:
                    cout << "Mata kuliah berhasil ditambahkan." << endl;
                    break;
                case 2:
                    cout << "Mata kuliah berhasil dihapus." << endl;
                    break;
                case 3:
                    cout << "Menampilkan daftar KRS Anda." << endl;
                    break;
                default:
                    cout << "Submenu KRS tidak valid." << endl;
            }
            break;
        case 3:
            cout << "Menampilkan Menu Nilai Mahasiswa." << endl;
            break;
        case 4:
            cout << "Menampilkan Menu Jadwal Kuliah." << endl;
            break;
        case 5:
            cout << "Menampilkan Menu Transkrip Nilai." << endl;
            break;
        case 6:
            cout << "Program selesai. Terima kasih." << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia. Silakan masukkan angka 1-6." << endl;
    }

    return 0;
}