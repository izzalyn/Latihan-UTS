#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double angka1, angka2, hasil;

    cout << "===== KALKULATOR =====";
    cout << endl;
    cout << "1. Penjumlahan";
    cout << endl;
    cout << "2. Pengurangan";
    cout << endl;
    cout << "3. Perkalian";
    cout << endl;
    cout << "4. Pembagian";
    cout << endl;
    cout << "Pilih menu (1-4): ";
    cin >> pilihan;

    if (pilihan >= 1 && pilihan <= 4) {
        cout << "Masukkan bilangan pertama: ";
        cin >> angka1;
        cout << "Masukkan bilangan kedua: ";
        cin >> angka2;
    }

    switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            cout << "Hasil: " << angka1 << " + " << angka2 << " = " << hasil;
            cout << endl;
            break;
        case 2:
            hasil = angka1 - angka2;
            cout << "Hasil: " << angka1 << " - " << angka2 << " = " << hasil;
            cout << endl;
            break;
        case 3:
            hasil = angka1 * angka2;
            cout << "Hasil: " << angka1 << " * " << angka2 << " = " << hasil;
            cout << endl;
            break;
        case 4:
            if (angka2 == 0) {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!";
                cout << endl;
            } else {
                hasil = angka1 / angka2;
                cout << "Hasil: " << angka1 << " / " << angka2 << " = " << hasil;
                cout << endl;
            }
            break;
        default:
            cout << "Pilihan menu tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}