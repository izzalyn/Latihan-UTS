#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    string nama = "Izza Ahmaddina";
    string nim = "2026001";
    string prodi = "Informatika";
    string semester = "1";

    do {
        cout << endl;
        cout << "=== SISTEM AKADEMIK ===";
        cout << endl;
        cout << "1. Biodata";
        cout << endl;
        cout << "2. KRS";
        cout << endl;
        cout << "3. Nilai";
        cout << endl;
        cout << "4. Jadwal";
        cout << endl;
        cout << "5. Transkrip";
        cout << endl;
        cout << "6. Keluar";
        cout << endl;
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "--- BIODATA MAHASISWA ---";
                cout << endl;
                cout << "Nama     : " << nama;
                cout << endl;
                cout << "NIM      : " << nim;
                cout << endl;
                cout << "Prodi    : " << prodi;
                cout << endl;
                cout << "Semester : " << semester;
                cout << endl;
                break;

            case 2:
                cout << "--- KARTU RENCANA STUDI (KRS) ---";
                cout << endl;
                cout << "Daftar mata kuliah aktif: Pemrograman Dasar, Matematika Diskrit, Logika Informatika.";
                cout << endl;
                break;

            case 3:
                cout << "--- NILAI AKADEMIK ---";
                cout << endl;
                cout << "Daftar nilai semester ini sudah diunggah oleh dosen pengampu.";
                cout << endl;
                break;

            case 4:
                cout << "--- JADWAL KULIAH ---";
                cout << endl;
                cout << "Senin: Pemrograman Dasar | Selasa: Matematika Diskrit.";
                cout << endl;
                break;

            case 5:
                cout << "--- TRANSKRIP NILAI ---";
                cout << endl;
                cout << "Total SKS: 20 | IPK: 3.85";
                cout << endl;
                break;

            case 6:
                cout << "Keluar dari sistem akademik. Terima kasih.";
                cout << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia! Silakan masukkan angka 1 sampai 6.";
                cout << endl;
                break;
        }

    } while (pilihan != 6);

    return 0;
}