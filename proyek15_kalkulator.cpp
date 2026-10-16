#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, hasil;
    char op;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Pilih operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (op) {
        case '+':
            hasil = angka1 + angka2;
            cout << "Hasil: " << angka1 << " + " << angka2 << " = " << hasil;
            cout << endl;
            break;
        case '-':
            hasil = angka1 - angka2;
            cout << "Hasil: " << angka1 << " - " << angka2 << " = " << hasil;
            cout << endl;
            break;
        case '*':
            hasil = angka1 * angka2;
            cout << "Hasil: " << angka1 << " * " << angka2 << " = " << hasil;
            cout << endl;
            break;
        case '/':
            if (angka2 == 0) {
                cout << "Error: Tidak bisa melakukan pembagian dengan angka nol!";
                cout << endl;
            } else {
                hasil = angka1 / angka2;
                cout << "Hasil: " << angka1 << " / " << angka2 << " = " << hasil;
                cout << endl;
            }
            break;
        default:
            cout << "Operator tidak valid!";
            cout << endl;
            break;
    }

    return 0;
}