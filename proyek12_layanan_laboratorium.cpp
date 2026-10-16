#include <iostream>
using namespace std;

int main() {
    int kode;

    cout << "--- LAYANAN LABORATORIUM ---";
    cout << endl;
    cout << "1. Peminjaman Lab";
    cout << endl;
    cout << "2. Peminjaman Komputer";
    cout << endl;
    cout << "3. Instalasi Software";
    cout << endl;
    cout << "4. Reset Password";
    cout << endl;
    cout << "5. Keluar";
    cout << endl;
    cout << "Masukkan kode layanan: ";
    cin >> kode;

    switch (kode) {
        case 1:
            cout << "Prosedur: Isi form peminjaman lab dan minta persetujuan dosen.";
            cout << endl;
            break;
        case 2:
            cout << "Prosedur: Tunjukkan KTM dan pilih unit komputer.";
            cout << endl;
            break;
        case 3:
            cout << "Prosedur: Bawa laptop ke meja admin lab.";
            cout << endl;
            break;
        case 4:
            cout << "Prosedur: Tunjukkan KTM untuk verifikasi reset password.";
            cout << endl;
            break;
        case 5:
            cout << "Keluar.";
            cout << endl;
            break;
        default:
            cout << "Kode tidak valid!";
            cout << endl;
            break;
    }

    return 0;
}