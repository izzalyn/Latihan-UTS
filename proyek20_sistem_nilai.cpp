#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double nilai = 0;

    cout << "--- SISTEM NILAI ---";
    cout << endl;
    cout << "1. Input Nilai";
    cout << endl;
    cout << "2. Lihat Nilai";
    cout << endl;
    cout << "3. Tentukan Grade";
    cout << endl;
    cout << "4. Keluar";
    cout << endl;
    cout << "Pilih menu (1-4): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan nilai angka: ";
            cin >> nilai;
            cout << "Nilai berhasil disimpan!";
            cout << endl;
            break;

        case 2:
            cout << "Nilai saat ini: " << nilai;
            cout << endl;
            break;

        case 3:
            if (nilai >= 85 && nilai <= 100) {
                cout << "Grade: A";
                cout << endl;
            } else if (nilai >= 70 && nilai < 85) {
                cout << "Grade: B";
                cout << endl;
            } else if (nilai >= 55 && nilai < 70) {
                cout << "Grade: C";
                cout << endl;
            } else if (nilai >= 40 && nilai < 55) {
                cout << "Grade: D";
                cout << endl;
            } else {
                cout << "Grade: E";
                cout << endl;
            }
            break;

        case 4:
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