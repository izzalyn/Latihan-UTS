#include <iostream>

using namespace std;

int main() {
    int fakultas;
    int prodi;

    cout << "Pilih Fakultas:" << endl;
    cout << "1. Teknik" << endl;
    cout << "2. Ekonomi" << endl;
    cout << "Masukkan pilihan fakultas (1/2): ";
    cin >> fakultas;

    switch (fakultas) {
        case 1:
            cout << "\nFakultas Teknik - Pilih Program Studi:" << endl;
            cout << "1. Teknik Informatika" << endl;
            cout << "2. Sistem Informasi" << endl;
            cout << "Masukkan pilihan prodi: ";
            cin >> prodi;

            switch (prodi) {
                case 1:
                    cout << "Anda memilih Program Studi: Teknik Informatika" << endl;
                    break;
                case 2:
                    cout << "Anda memilih Program Studi: Sistem Informasi" << endl;
                    break;
                default:
                    cout << "Program Studi tidak tersedia di Fakultas Teknik." << endl;
            }
            break;

        case 2:
            cout << "\nFakultas Ekonomi - Pilih Program Studi:" << endl;
            cout << "1. Manajemen" << endl;
            cout << "2. Akuntansi" << endl;
            cout << "Masukkan pilihan prodi: ";
            cin >> prodi;

            switch (prodi) {
                case 1:
                    cout << "Anda memilih Program Studi: Manajemen" << endl;
                    break;
                case 2:
                    cout << "Anda memilih Program Studi: Akuntansi" << endl;
                    break;
                default:
                    cout << "Program Studi tidak tersedia di Fakultas Ekonomi." << endl;
            }
            break;

        default:
            cout << "Fakultas tidak tersedia!" << endl;
    }

    return 0;
}