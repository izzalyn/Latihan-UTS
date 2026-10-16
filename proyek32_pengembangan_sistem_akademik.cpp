#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    string nama = "Izza Ahmaddina";
    string nim = "2026001";
    string prodi = "Informatika";
    string semester = "1";

    cout << "=== SISTEM AKADEMIK KAMPUS ===";
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

        case 2: {
            int subKrs;
            cout << "--- MENU KRS ---";
            cout << endl;
            cout << "1. Tambah Mata Kuliah";
            cout << endl;
            cout << "2. Hapus Mata Kuliah";
            cout << endl;
            cout << "3. Lihat KRS";
            cout << endl;
            cout << "Pilih submenu KRS (1-3): ";
            cin >> subKrs;

            switch (subKrs) {
                case 1:
                    cout << "Berhasil menambahkan mata kuliah baru ke dalam KRS.";
                    cout << endl;
                    break;
                case 2:
                    cout << "Berhasil menghapus mata kuliah dari KRS.";
                    cout << endl;
                    break;
                case 3:
                    cout << "Daftar KRS aktif: Pemrograman Dasar, Logika Informatika, Matematika Diskrit.";
                    cout << endl;
                    break;
                default:
                    cout << "Submenu KRS tidak valid!";
                    cout << endl;
                    break;
            }
            break;
        }

        case 3:
            cout << "--- NILAI AKADEMIK ---";
            cout << endl;
            cout << "Daftar nilai semester ini sudah diperbarui oleh dosen.";
            cout << endl;
            break;

        case 4:
            cout << "--- JADWAL KULIAH ---";
            cout << endl;
            cout << "Senin: Pemrograman Dasar | Selasa: Logika Informatika.";
            cout << endl;
            break;

        case 5:
            cout << "--- TRANSKRIP NILAI ---";
            cout << endl;
            cout << "Total SKS: 20 | IPK Sementara: 3.85";
            cout << endl;
            break;

        case 6:
            cout << "Keluar dari sistem akademik. Terima kasih.";
            cout << endl;
            break;

        default:
            cout << "Pilihan menu utama tidak valid!";
            cout << endl;
            break;
    }

    return 0;
}