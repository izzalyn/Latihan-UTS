#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "===== MENU =====";
    cout << endl;
    cout << "1. Profil";
    cout << endl;
    cout << "2. Nilai";
    cout << endl;
    cout << "3. Jadwal";
    cout << endl;
    cout << "4. Keluar";
    cout << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Menu Profil";
            cout << endl;
            break;
        case 2:
            cout << "Menu Nilai";
            cout << endl;
            break;
        case 3:
            cout << "Menu Jadwal";
            cout << endl;
            break;
        case 4:
            cout << "Program selesai";
            cout << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia";
            cout << endl;
            break;
    }

    return 0;
}