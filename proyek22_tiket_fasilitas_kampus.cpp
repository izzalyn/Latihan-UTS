#include <iostream>
using namespace std;

int main() {
    int pilihan, jam;
    long tarifPerJam = 0, totalBiaya = 0;

    cout << "=== TIKET FASILITAS KAMPUS ===";
    cout << endl;
    cout << "1. Lapangan (Rp 50.000 / jam)";
    cout << endl;
    cout << "2. Auditorium (Rp 200.000 / jam)";
    cout << endl;
    cout << "3. Laboratorium (Rp 100.000 / jam)";
    cout << endl;
    cout << "4. Ruang Seminar (Rp 150.000 / jam)";
    cout << endl;
    cout << "Pilih fasilitas (1-4): ";
    cin >> pilihan;

    cout << "Masukkan lama penggunaan (jam): ";
    cin >> jam;

    if (jam < 1) {
        cout << "Error: Lama penggunaan minimal 1 jam!";
        cout << endl;
        return 0;
    }

    switch (pilihan) {
        case 1:
            tarifPerJam = 50000;
            break;
        case 2:
            tarifPerJam = 200000;
            break;
        case 3:
            tarifPerJam = 100000;
            break;
        case 4:
            tarifPerJam = 150000;
            break;
        default:
            cout << "Pilihan fasilitas tidak tersedia!";
            cout << endl;
            return 0;
    }

    totalBiaya = tarifPerJam * jam;
    cout << "Total Tarif: Rp " << totalBiaya;
    cout << endl;

    return 0;
}