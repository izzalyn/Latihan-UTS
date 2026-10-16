#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double nilai, hasil;

    cout << "--- MENU KONVERSI SATUAN ---";
    cout << endl;
    cout << "1. Meter -> Kilometer";
    cout << endl;
    cout << "2. Kilometer -> Meter";
    cout << endl;
    cout << "3. Meter -> Centimeter";
    cout << endl;
    cout << "4. Centimeter -> Meter";
    cout << endl;
    cout << "Pilih menu (1-4): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan nilai (Meter): ";
            cin >> nilai;
            hasil = nilai / 1000;
            cout << "Hasil: " << nilai << " Meter = " << hasil << " Kilometer";
            cout << endl;
            break;
        case 2:
            cout << "Masukkan nilai (Kilometer): ";
            cin >> nilai;
            hasil = nilai * 1000;
            cout << "Hasil: " << nilai << " Kilometer = " << hasil << " Meter";
            cout << endl;
            break;
        case 3:
            cout << "Masukkan nilai (Meter): ";
            cin >> nilai;
            hasil = nilai * 100;
            cout << "Hasil: " << nilai << " Meter = " << hasil << " Centimeter";
            cout << endl;
            break;
        case 4:
            cout << "Masukkan nilai (Centimeter): ";
            cin >> nilai;
            hasil = nilai / 100;
            cout << "Hasil: " << nilai << " Centimeter = " << hasil << " Meter";
            cout << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}