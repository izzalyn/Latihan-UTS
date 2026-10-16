#include <iostream>

using namespace std;

int main() {
    int jenis;
    int lama;
    long tarifPerJam = 0;
    long totalTarif = 0;

    cout << "=== SISTEM PARKIR KAMPUS ===" << endl;
    cout << "1. Motor (Rp2.000/jam)" << endl;
    cout << "2. Mobil (Rp5.000/jam)" << endl;
    cout << "3. Bus (Rp10.000/jam)" << endl;
    cout << "Pilih jenis kendaraan (1-3): ";
    cin >> jenis;

    cout << "Masukkan lama parkir (dalam jam): ";
    cin >> lama;

    if (lama < 1) {
        cout << "Lama parkir minimal 1 jam." << endl;
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
            cout << "Kode jenis kendaraan tidak valid!" << endl;
            return 0;
    }

    totalTarif = tarifPerJam * lama;
    
    if (lama > 5) {
        long diskon = totalTarif * 0.10;
        totalTarif -= diskon;
        cout << "Selamat! Anda mendapatkan diskon 10% karena parkir > 5 jam." << endl;
    }

    cout << "Total Tarif Parkir: Rp" << totalTarif << endl;

    return 0;
}