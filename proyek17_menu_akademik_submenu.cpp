#include <iostream>
using namespace std;

int main() {
    int menuUtama, subAkademik;

    cout << "=== MENU UTAMA ===";
    cout << endl;
    cout << "1. Akademik";
    cout << endl;
    cout << "2. Keuangan";
    cout << endl;
    cout << "3. Perpustakaan";
    cout << endl;
    cout << "4. Kemahasiswaan";
    cout << endl;
    cout << "5. Keluar";
    cout << endl;
    cout << "Pilih menu utama: ";
    cin >> menuUtama;

    switch (menuUtama) {
        case 1:
            cout << "--- SUBMENU AKADEMIK ---";
            cout << endl;
            cout << "1. KRS";
            cout << endl;
            cout << "2. Nilai";
            cout << endl;
            cout << "3. Jadwal";
            cout << endl;
            cout << "4. Transkrip";
            cout << endl;
            cout << "Pilih submenu akademik: ";
            cin >> subAkademik;

            // Nested switch-case di dalam case 1
            switch (subAkademik) {
                case 1:
                    cout << "Menampilkan Kartu Rencana Studi (KRS) mahasiswa.";
                    cout << endl;
                    break;
                case 2:
                    cout << "Menampilkan daftar nilai mata kuliah.";
                    cout << endl;
                    break;
                case 3:
                    cout << "Menampilkan jadwal perkuliahan aktif.";
                    cout << endl;
                    break;
                case 4:
                    cout << "Menampilkan transkrip nilai sementara.";
                    cout << endl;
                    break;
                default:
                    cout << "Pilihan submenu akademik tidak tersedia!";
                    cout << endl;
                    break;
            }
            break;

        case 2:
            cout << "Menu Keuangan dipilih.";
            cout << endl;
            break;

        case 3:
            cout << "Menu Perpustakaan dipilih.";
            cout << endl;
            break;

        case 4:
            cout << "Menu Kemahasiswaan dipilih.";
            cout << endl;
            break;

        case 5:
            cout << "Keluar dari program.";
            cout << endl;
            break;

        default:
            cout << "Pilihan menu utama tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}