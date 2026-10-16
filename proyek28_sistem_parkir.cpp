#include <iostream>
using namespace std;

int main() {
    int jenis, jam;
    long tarifPerJam = 0, totalBiaya = 0;

    cout << "=== SISTEM PARKIR ===";
    cout << endl;
    cout << "1. Motor (Rp 2.000 / jam)";
    cout << endl;
    cout << "2. Mobil (Rp 5.000 / jam)";
    cout << endl;
    cout << "3. Bus (Rp 10.000 / jam)";
    cout << endl;
    cout << "Pilih jenis kendaraan (1-3): ";
    cin >> jenis;

    cout << "Masukkan lama parkir (jam): ";
    cin >> jam;

    if (jam < 1) {
        cout << "Error: Lama parkir minimal 1 jam!";
        cout << endl;
        return 0;
    }

    switch (jenis) {
        case 1:
            tarifPerJam = 2000;
            break;
        case 2:
            tarifPerJam = 5000;
            break;
        case 3:
            tarifPerJam = 10000;
            break;
        default:
            cout << "Pilihan jenis kendaraan tidak valid!";
            cout << endl;
            return 0;
    }

    totalBiaya = tarifPerJam * jam;
    cout << "Total Tarif Parkir: Rp " << totalBiaya;
    cout << endl;

    return 0;
}