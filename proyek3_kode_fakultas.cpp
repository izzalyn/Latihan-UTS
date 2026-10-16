#include <iostream>
using namespace std;

int main() {
    char kode;
    cout << "Masukkan kode fakultas (A/B/C/D): ";
    cin >> kode;

    switch (kode) {
        case 'A': cout << "Fakultas Teknik"; break;
        case 'B': cout << "Fakultas Ekonomi"; break;
        case 'C': cout << "Fakultas Ilmu Komputer"; break;
        case 'D': cout << "Fakultas Pendidikan"; break;
        default: cout << "Kode fakultas tidak dikenal";
    }
    return 0;
}