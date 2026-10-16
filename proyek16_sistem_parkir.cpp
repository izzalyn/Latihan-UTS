#include <iostream>
using namespace std;

int main() {
    int jenis, jam;
    long biaya = 0;

    cout << "=== TARIF PARKIR KAMPUS ===";
    cout << endl;
    cout << "1. Sepeda Motor";
    cout << endl;
    cout << "2. Mobil";
    cout << endl;
    cout << "Pilih jenis kendaraan: ";
    cin >> jenis;

    cout << "Masukkan lama parkir (jam): ";
    cin >> jam;

    if (jam < 1) {
        cout << "Error: Lama parkir minimal adalah 1 jam!";
        cout << endl;
    } else {
        switch (jenis) {
            case 1:
                biaya = jam * 2000; // Rp 2.000 per jam untuk motor
                cout << "Kendaraan: Sepeda Motor";
                cout << endl;
                cout << "Lama Parkir: " << jam << " jam";
                cout << endl;
                cout << "Total Biaya: Rp " << biaya;
                cout << endl;
                break;
            case 2:
                biaya = jam * 5000; // Rp 5.000 per jam untuk mobil
                cout << "Kendaraan: Mobil";
                cout << endl;
                cout << "Lama Parkir: " << jam << " jam";
                cout << endl;
                cout << "Total Biaya: Rp " << biaya;
                cout << endl;
                break;
            default:
                cout << "Pilihan jenis kendaraan tidak tersedia!";
                cout << endl;
                break;
        }
    }

    return 0;
}