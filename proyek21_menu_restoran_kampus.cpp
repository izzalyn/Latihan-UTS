#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    long harga = 0, subtotal = 0, diskon = 0, totalAkhir = 0;

    cout << "=== MENU RESTORAN KAMPUS ===";
    cout << endl;
    cout << "1. Nasi Goreng - Rp15.000";
    cout << endl;
    cout << "2. Mie Ayam - Rp12.000";
    cout << endl;
    cout << "3. Soto - Rp13.000";
    cout << endl;
    cout << "4. Es Teh - Rp5.000";
    cout << endl;
    cout << "Pilih menu (1-4): ";
    cin >> pilihan;

    cout << "Masukkan jumlah porsi: ";
    cin >> jumlah;

    switch (pilihan) {
        case 1:
            harga = 15000;
            break;
        case 2:
            harga = 12000;
            break;
        case 3:
            harga = 13000;
            break;
        case 4:
            harga = 5000;
            break;
        default:
            cout << "Pilihan menu tidak tersedia!";
            cout << endl;
            return 0;
    }

    subtotal = harga * jumlah;

    if (subtotal >= 50000) {
        diskon = subtotal * 0.10; // Diskon 10% jika subtotal >= Rp50.000
        totalAkhir = subtotal - diskon;
    } else {
        totalAkhir = subtotal;
    }

    cout << "Subtotal: Rp " << subtotal;
    cout << endl;
    if (subtotal >= 50000) {
        cout << "Diskon: Rp " << diskon;
        cout << endl;
    }
    cout << "Total Akhir: Rp " << totalAkhir;
    cout << endl;

    return 0;
}