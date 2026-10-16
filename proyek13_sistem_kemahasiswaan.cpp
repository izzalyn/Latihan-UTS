#include <iostream>
using namespace std;

int main() {
    int menu;

    cout << "--- MENU KEMAHASISWAAN ---";
    cout << endl;
    cout << "1. Beasiswa";
    cout << endl;
    cout << "2. Organisasi Mahasiswa";
    cout << endl;
    cout << "3. Surat Aktif Kuliah";
    cout << endl;
    cout << "4. Kegiatan Mahasiswa";
    cout << endl;
    cout << "5. Konseling Akademik";
    cout << endl;
    cout << "6. Keluar";
    cout << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "Informasi: Pendaftaran beasiswa semester ini dibuka hingga akhir bulan.";
            cout << endl;
            break;
        case 2:
            cout << "Informasi: Daftar Ormawa tersedia di website resmi kampus.";
            cout << endl;
            break;
        case 3:
            cout << "Informasi: Pengajuan surat aktif kuliah dapat dilakukan melalui portal akademik.";
            cout << endl;
            break;
        case 4:
            cout << "Informasi: Kegiatan mahasiswa minggu ini meliputi seminar nasional.";
            cout << endl;
            break;
        case 5:
            cout << "Informasi: Jadwal konseling akademik dibuka setiap hari kerja pukul 09.00.";
            cout << endl;
            break;
        case 6:
            cout << "Keluar dari program.";
            cout << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}