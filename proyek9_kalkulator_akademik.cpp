#include <iostream>

using namespace std;

int main() {
    int pilihan;
    float angka1, angka2;

    cout << "=== KALKULATOR AKADEMIK ===" << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cout << "Pilih operasi (1-4): ";
    cin >> pilihan;

    cout << "Masukkan bilangan pertama: ";
    cin >> angka1;
    cout << "Masukkan bilangan kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            cout << "Hasil: " << angka1 << " + " << angka2 << " = " << (angka1 + angka2) << endl;
            break;
        case 2:
            cout << "Hasil: " << angka1 << " - " << angka2 << " = " << (angka1 - angka2) << endl;
            break;
        case 3:
            cout << "Hasil: " << angka1 << " * " << angka2 << " = " << (angka1 * angka2) << endl;
            break;
        case 4:
            if (angka2 != 0) {
                cout << "Hasil: " << angka1 << " / " << angka2 << " = " << (angka1 / angka2) << endl;
            } else {
                cout << "Kesalahan: Tidak dapat melakukan pembagian dengan angka nol (0)!" << endl;
            }
            break;
        default:
            cout << "Pilihan operasi tidak valid!" << endl;
    }

    return 0;
}